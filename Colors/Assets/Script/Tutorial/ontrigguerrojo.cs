using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ontrigguerrojo : MonoBehaviour
{
    public GameObject manorojo;
    void OnTriggerEnter2D(Collider2D collision)
    {
        manorojo.SetActive(true);
    }
    void OnTriggerExit2D(Collider2D other)
    {
        manorojo.SetActive(false);
    }
}
