using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OptionsOnClick : MonoBehaviour
{
    public RectTransform Options;
    public AudioSource MenuSound;
    public void CambiarMenu()
    {
        MenuSound.Play();
        Options.localPosition = new Vector3(0, 0);    
    }

    public void RegresarMenu()
    {
        MenuSound.Play();
        Options.localPosition = new Vector3(1930, 0);
    }
}
