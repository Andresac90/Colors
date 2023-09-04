using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SetMuseVolume : MonoBehaviour
{
    public AudioMixer mixer;
    public Slider slider;

    void Start()
    {
        //slider.value = PlayerPrefs.GetFloat("musicVol", 0.75f);
    }

    public void SetLevel(float sliderValue)
    {
        mixer.SetFloat("musicVol", Mathf.Log10(sliderValue) * 20);
        //PlayerPrefs.SetFloat("musicVol", sliderValue);
    }
}
