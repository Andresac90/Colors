using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ontrigguerazul : MonoBehaviour
{
    public GameObject manoazul;
    void OnTriggerEnter2D(Collider2D collision)
    {
        manoazul.SetActive(true);
    }
    void OnTriggerExit2D(Collider2D other)
    {
        manoazul.SetActive(false);
    }
}
