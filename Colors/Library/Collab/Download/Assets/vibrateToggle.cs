using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
public class vibrateToggle : MonoBehaviour
{
    public Toggle Toggle;
    public int ToggleInt;
    private static readonly string VibratePrefab = "Vibrate";
    void Start()
    {
        ToggleInt = PlayerPrefs.GetInt(VibratePrefab);
    }
    public void VibrateToggle(bool vibrate)
    {

        Toggle.isOn = vibrate;
        ToggleInt = vibrate ? 1 : 0;
        SaveToggleSettings();
    }
    void Update()
    {
        if(PlayerPrefs.GetInt(VibratePrefab) == 1)
        {
            Toggle.isOn = true;
        }
        if (PlayerPrefs.GetInt(VibratePrefab) == 0)
        {
            Toggle.isOn = false;
        }
    }
    public void SaveToggleSettings()
    {
        PlayerPrefs.SetInt(VibratePrefab, ToggleInt);
    }
    
}
