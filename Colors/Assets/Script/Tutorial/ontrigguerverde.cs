using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ontrigguerverde : MonoBehaviour
{
    public GameObject manoverde;
    void OnTriggerEnter2D(Collider2D collision)
    {
        manoverde.SetActive(true);
    }

    void OnTriggerExit2D(Collider2D collision)
    {
        manoverde.SetActive(false);
    }
}
