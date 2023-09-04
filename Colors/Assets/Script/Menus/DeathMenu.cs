using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;

public class DeathMenu : MonoBehaviour, IUnityAdsListener
{
    // Start is called before the first frame update
    //Sounds
    public AudioSource beetlesauce;
    public AudioSource MenuSound;
    public AudioSource RestartSound;

    public bool testMode = true;
    string gameID = "3527630";
    string placementID2 = "rewardedVideo";
    public GameObject secondchance;
    public GameObject restart;
    public GameObject resumee;
    public GameObject restart2;
    public bool yess = false;
    //void update()
    //{
    //    beetlesauce.Play();
    //    beetlesauce.loop = true;
    //}
    public void RestarGame()
    {
        RestartSound.Play();
        FindObjectOfType<GameManager>().Reset();
        beetlesauce.Stop();
        
    }
    public void Quittomain()
    {
        beetlesauce.Stop();
        MenuSound.Play();
        SceneManager.LoadScene(3);
        Time.timeScale = 1f;
    }
    IEnumerator Start()
    {
        Advertisement.AddListener(this);
        Advertisement.Initialize(gameID, testMode);
        while (!Advertisement.IsReady(placementID2))
        {
            yield return null;

        }

    }
    public void SecondChance()
    {
        if (PlayerPrefs.HasKey("AdFree"))
        {
            yess = true;
            AdsFreeSecond();
            beetlesauce.Stop();
        }
        else
        {
            Advertisement.Show(placementID2);
            yess = true;
            beetlesauce.Stop();
        }
        
    }
    public void Resume()
    {
        FindObjectOfType<GameManager>().ResumeGame();
        beetlesauce.Stop();
    }

    public void OnUnityAdsReady(string placementID2)
    {
        throw new System.NotImplementedException();
    }

    public void OnUnityAdsDidError(string message)
    {
        throw new System.NotImplementedException();
    }

    public void OnUnityAdsDidStart(string placementID2)
    {
        throw new System.NotImplementedException();
    }

    public void OnUnityAdsDidFinish(string placementID2, ShowResult showResult)
    {
        if(yess == true)
        {
            secondchance.gameObject.SetActive(false);
            restart.gameObject.SetActive(false);
            resumee.gameObject.SetActive(true);
        }
        
    }

    public void AdsFreeSecond()
    {
        if (yess == true)
        {
            secondchance.gameObject.SetActive(false);
            restart.gameObject.SetActive(false);
            resumee.gameObject.SetActive(true);
        }
    }
}
