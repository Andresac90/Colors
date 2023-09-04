using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class storepurchase : MonoBehaviour
{
    public Text botoncompra;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(PlayerPrefs.HasKey("AdFree"))
        {
            botoncompra.text = "Thank you for your purchase!";
        }
    }
}
