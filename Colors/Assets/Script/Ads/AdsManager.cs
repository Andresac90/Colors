//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using UnityEngine.Advertisements;
////Ads rewarded Menu on Death Menu script
//public class AdsManager : MonoBehaviour/*, IUnityAdsListener*/
//{
//    public bool testMode = false;
//    public movement Player;
//#if UNITY_ANDROID
//    string gameID = "3527630";
//    string placementID = "video";
//    private IEnumerator coroutine2;
//    public int chequeo = 0;
//    IEnumerator Start()
//    {
//        chequeo = 0;
//        Advertisement.Initialize(gameID, testMode);
//        while (!Advertisement.IsReady(placementID))
//        {
//            yield return null;

//        }

//    }
//    void Update()
//    {
//        if (Player.speed == 0 && chequeo == 0)
//        {
//            if (PlayerPrefs.HasKey("AdFree"))
//            {
//                return;
//            }
//            else
//            {
//                StartCoroutine(WaitForIt_Death3());
//                chequeo = 1;
//                coroutine2 = WaitAndPrint2(0.85f);
//                StartCoroutine(coroutine2);
//            }


//        }

//    }
//    private IEnumerator WaitAndPrint2(float waitTime2)
//    {
//        if (chequeo == 1)
//        {
//            yield return new WaitForSeconds(14f);
//            chequeo = 0;
//        }
//    }
//    IEnumerator WaitForIt_Death3()
//    {
//        yield return new WaitForSeconds(0.5f);
//        Advertisement.Show(placementID);
//        Player.speed = 10.26316f;

//    }

//#endif
//#if UNITY_IOS
//    string gameID = "3527631";
//    string placementID = "video";
//    private IEnumerator coroutine2;
//    public int chequeo = 0;
//    IEnumerator Start()
//    {
//        chequeo = 0;
//        Advertisement.Initialize(gameID, testMode);
//        while (!Advertisement.IsReady(placementID))
//        {
//            yield return null;

//        }

//    }
//    void Update()
//    {
//        if (Player.speed == 0 && chequeo == 0)
//        {
//            if (PlayerPrefs.HasKey("AdFree"))
//            {
//                return;
//            }
//            else
//            {
//                StartCoroutine(WaitForIt_Death3());
//                chequeo = 1;
//                coroutine2 = WaitAndPrint2(0.85f);
//                StartCoroutine(coroutine2);
//            }


//        }

//    }
//    private IEnumerator WaitAndPrint2(float waitTime2)
//    {
//        if (chequeo == 1)
//        {
//            yield return new WaitForSeconds(14f);
//            chequeo = 0;
//        }
//    }
//    IEnumerator WaitForIt_Death3()
//    {
//        yield return new WaitForSeconds(0.5f);
//        Advertisement.Show(placementID);
//        Player.speed = 10.26316f;

//    }
//#endif
//}
