using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ontriggueramarillo : MonoBehaviour
{
    public GameObject manoamarilla;
    void OnTriggerEnter2D(Collider2D collision)
    {
        manoamarilla.SetActive(true);
    }
    void OnTriggerExit2D(Collider2D other)
    {
        manoamarilla.SetActive(false);
    }
}
