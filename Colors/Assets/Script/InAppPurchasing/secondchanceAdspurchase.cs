using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class secondchanceAdspurchase : MonoBehaviour
{
    public Text secondchance;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (PlayerPrefs.HasKey("AdFree"))
        {
            secondchance.text = "Second Chance Free!";
        }
    }
}
