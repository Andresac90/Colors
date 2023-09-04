using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class BannerAdsMenu : MonoBehaviour
{
#if UNITY_ANDROID
    string gameID = "3527630";
    string placementID = "Banner";

    public bool testMode = false;

    IEnumerator Start()
    {

        Advertisement.Initialize(gameID, testMode);
        while (!Advertisement.IsReady(placementID))
        {
            yield return null;
        }
        if (PlayerPrefs.HasKey("AdFree"))
        {
            yield return null;
        }
        else
        {
            Advertisement.Banner.SetPosition(BannerPosition.TOP_CENTER);

            Advertisement.Banner.Show(placementID);
        }
        

    }
#endif
#if UNITY_IOS
    string gameID = "3527631";
    string placementID = "Banner";

    public bool testMode = false;

    IEnumerator Start()
    {

        Advertisement.Initialize(gameID, testMode);
        while (!Advertisement.IsReady(placementID))
        {
            yield return null;
        }
        if (PlayerPrefs.HasKey("AdFree"))
        {
            yield return null;
        }
        else
        {
            Advertisement.Banner.SetPosition(BannerPosition.TOP_CENTER);

            Advertisement.Banner.Show(placementID);
        }


    }
#endif


}