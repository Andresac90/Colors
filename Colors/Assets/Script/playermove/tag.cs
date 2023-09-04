using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tag : MonoBehaviour
{
    public GameObject playertag;
    private int color = 0;
    private Animator myanimator;
    public VibrateSettings vibrateactive;
    public AudioSource RedSound;
    public AudioSource GreenSound;
    public AudioSource BlueSound;
    public AudioSource YellowSound;
    // Start is called before the first frame update
    void Start()
    {
        playertag.gameObject.tag = "red";
        color = 0;
        myanimator = GetComponent<Animator>();
        Vibration.Init();
    }

#if UNITY_EDITOR && UNITY_STANDALONE_OSX
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.W))
        {
            RedSound.Play();
            playertag.gameObject.tag = "red";
            color = 0;
            myanimator.SetInteger("color", color);
        }
        if (Input.GetKeyDown(KeyCode.A))
        {
            BlueSound.Play();
            playertag.gameObject.tag = "blue";
            color = 1;
            myanimator.SetInteger("color", color);
        }
        if (Input.GetKeyDown(KeyCode.S))
        {
            GreenSound.Play();
            playertag.gameObject.tag = "green";
            color = 2;
            myanimator.SetInteger("color", color);
        }
        if (Input.GetKeyDown(KeyCode.D))
        {
            YellowSound.Play();
            playertag.gameObject.tag = "yellow";
            color = 3;
            myanimator.SetInteger("color", color);
        }
    }
#endif
    public void Red()
    {
        if (vibrateactive.vibrateBoolActivate == true)
        {
            Vibration.VibratePop();
        }
        RedSound.Play();
        playertag.gameObject.tag = "red";
        color = 0;
        myanimator.SetInteger("color", color);
    }
    public void Blue()
    {
        if (vibrateactive.vibrateBoolActivate == true)
        {
            Vibration.VibratePop();
        }
        BlueSound.Play();
        playertag.gameObject.tag = "blue";
        color = 1;
        myanimator.SetInteger("color", color);
    }
    public void Green()
    {
        if (vibrateactive.vibrateBoolActivate == true)
        {
            Vibration.VibratePop();
        }
        GreenSound.Play();
        playertag.gameObject.tag = "green";
        color = 2;
        myanimator.SetInteger("color", color);
    }
    public void Yellow()
    {
        if (vibrateactive.vibrateBoolActivate == true)
        {
            Vibration.VibratePop();
        }
        YellowSound.Play();
        playertag.gameObject.tag = "yellow";
        color = 3;
        myanimator.SetInteger("color", color);
    }
}
