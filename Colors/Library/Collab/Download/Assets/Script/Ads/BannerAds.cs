using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class BannerAds : MonoBehaviour
{
    string gameID = "3527630";
    string placementID = "Banner";
    
    public bool testMode = true;
    public movement Player;
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
            Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);

            Advertisement.Banner.Show(placementID);
        }
        
        
    }

    


}
