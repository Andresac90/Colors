using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using PlayFab;
using PlayFab.ClientModels;

public class PlayFabM : MonoBehaviour
{
    //Windows
    public GameObject nameWindow;
    public GameObject leaderboardWindows;
    public GameObject MenuObject;
    //Display name window
    //public GameObject nameError;
    public InputField nameInput;
    //Leaderboard
    public GameObject rowPrefab;
    public Transform rowsParent;

    //ShowName
    public Text Username;


    public bool Internet = true;
    // Start is called before the first frame update
    void Awake()
    {
        Login();
    }
#if UNITY_ANDROID
    void Login()
    {
        var request = new LoginWithAndroidDeviceIDRequest
        {
            AndroidDeviceId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = true,
            InfoRequestParameters = new GetPlayerCombinedInfoRequestParams
            {
                GetPlayerProfile = true
            }
        };
        PlayFabClientAPI.LoginWithAndroidDeviceID(request, OnSuccess, OnError);
    }
#endif
#if UNITY_IOS
    void Login()
    {
        var request = new LoginWithIOSDeviceIDRequest
        {
            DeviceId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = true,
            InfoRequestParameters = new GetPlayerCombinedInfoRequestParams
            {
                GetPlayerProfile = true
            }
        };
        PlayFabClientAPI.LoginWithIOSDeviceID(request, OnSuccess, OnError);
    }
#endif
    void OnSuccess(LoginResult result)
    {
        Scene scene = SceneManager.GetActiveScene();
        Internet = true;
        Debug.Log("Successful Login");
        string name = null;
        if (result.InfoResultPayload.PlayerProfile != null)
        {
            name = result.InfoResultPayload.PlayerProfile.DisplayName;
            if(scene.name == "Menu")
            {
                Username.text = "Username: " + name;
            }
            
        }
        if (name == null)
        {
            nameWindow.SetActive(true);
            MenuObject.SetActive(false);
        }
        else
        {
            //leaderboardWindows.SetActive(true);
        }
    }

    public void SubmitNameButton()
    {
        Scene scene = SceneManager.GetActiveScene();
        var request = new UpdateUserTitleDisplayNameRequest
        {
            DisplayName = nameInput.text,
        };
        PlayFabClientAPI.UpdateUserTitleDisplayName(request, OnDisplayNameUpdate, OnError);
        if (scene.name == "Menu")
        {
            Username.text = "Username: " + nameInput.text;
        }
    }

    void OnDisplayNameUpdate(UpdateUserTitleDisplayNameResult result)
    {
        Debug.Log("Updated display name!");
        //leaderboardWindows.SetActive(true);
    }
    void OnError(PlayFabError error)
    {
        Internet = false;
        Debug.Log("Error while Logging in");
        Debug.Log(error.GenerateErrorReport());
    }

    public void SendLeaderboard(int score)
    {
        var request = new UpdatePlayerStatisticsRequest
        {
            Statistics = new List<StatisticUpdate>
            {
                new StatisticUpdate
                {
                    StatisticName = "HighScore",
                    Value = score
                }

            }
        };
        PlayFabClientAPI.UpdatePlayerStatistics(request, OnLeaderboardUpdate, OnError);
    }

    void OnLeaderboardUpdate(UpdatePlayerStatisticsResult result)
    {
        Debug.Log("Successfull leaderboard sent");
    }

    public void GetLeaderboard()
    {
        var request = new GetLeaderboardRequest
        {
            StatisticName = "HighScore",
            StartPosition = 0,
            MaxResultsCount = 15
        };
        PlayFabClientAPI.GetLeaderboard(request, OnLeaderboardGet, OnError);
    }

    void OnLeaderboardGet(GetLeaderboardResult result)
    {
        foreach (Transform item in rowsParent)
        {
            Destroy(item.gameObject);
        }
        foreach (var item in result.Leaderboard)
        {
            GameObject newGo = Instantiate(rowPrefab, rowsParent);
            Text[] texts = newGo.GetComponentsInChildren<Text>();
            texts[0].text = (item.Position + 1).ToString();
            texts[1].text = item.DisplayName;
            texts[2].text = item.StatValue.ToString();
            Debug.Log(item.Position + " " + item.PlayFabId + " " + item.StatValue);
        }
    }
}
