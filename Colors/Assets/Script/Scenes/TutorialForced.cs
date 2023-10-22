using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class TutorialForced : MonoBehaviour
{
    private static readonly string Tutorial = "Tutorial";
    private int TutorialInt;
    public vibrateToggle tutorialvib;
    // Start is called before the first frame update
    void Awake()
    {
        Application.targetFrameRate = Screen.currentResolution.refreshRate;
        //Debug.Log(Screen.currentResolution.refreshRate);
        QualitySettings.vSyncCount = 0;

        TutorialInt = PlayerPrefs.GetInt(Tutorial);
        if (TutorialInt == 0)
        {
            SceneManager.LoadScene(4);
            PlayerPrefs.SetInt("Tutorial", 1);
            tutorialvib.ToggleInt = 1;
            PlayerPrefs.SetInt("Vibrate", tutorialvib.ToggleInt);
            PlayerPrefs.Save();
            
        }
    }
}
