using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ontrigguercentro : MonoBehaviour
{
    public GameObject manocentro;
    void OnTriggerEnter2D(Collider2D collision)
    {
        manocentro.SetActive(true);
    }
    void OnTriggerExit2D(Collider2D other)
    {
        manocentro.SetActive(false);
    }
}
