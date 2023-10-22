//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using UnityEngine.Advertisements;

//public class adsloading : MonoBehaviour
//{
//    public bool testMode = false;
//#if UNITY_ANDROID
//    string gameID = "3527630";
//    string placementID = "video";
//    IEnumerator Start()
//    {
//        Advertisement.Initialize(gameID, testMode);
//        while (!Advertisement.IsReady(placementID))
//        {
//            yield return null;

//        }
//        ShowAds();

//    }
//    void ShowAds()
//    {
//        if (PlayerPrefs.HasKey("AdFree"))
//        {
//            return;
//        }
//        else
//        {
//            Advertisement.Show(placementID);
//        }
//    }
//#endif
//#if UNITY_IOS
//    string gameID = "3527631";
//    string placementID = "video";
//    IEnumerator Start()
//    {
//        Advertisement.Initialize(gameID, testMode);
//        while (!Advertisement.IsReady(placementID))
//        {
//            yield return null;

//        }
//        ShowAds();

//    }
//    void ShowAds()
//    {
//        if (PlayerPrefs.HasKey("AdFree"))
//        {
//            return;
//        }
//        else
//        {
//            Advertisement.Show(placementID);
//        }
//    }
//#endif
//}
