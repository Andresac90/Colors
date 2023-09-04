using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;

public class VibrateSettings : MonoBehaviour
{
    private static readonly string VibrateString= "Vibrate";
    public int vibrateintt;
    public bool vibrateBoolActivate;
    void Awake()
    {
        ContinueSettings();
    }

    private void ContinueSettings()
    {
        vibrateintt = PlayerPrefs.GetInt(VibrateString);
        vibrateBoolActivate = Convert.ToBoolean(vibrateintt);
        Debug.Log(PlayerPrefs.GetInt(VibrateString));
    }
}
