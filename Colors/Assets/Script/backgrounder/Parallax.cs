using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;

public class Parallax : MonoBehaviour
{
    private float leng;
    private float starPos;
    public GameObject camming;
    public float effectParalalex;
    // Start is called before the first frame update
    void Start()
    {
        starPos = transform.position.x;
        leng = GetComponent<SpriteRenderer>().bounds.size.x;
    }

    // Update is called once per frame
    void Update()
    {
        float temporalityControlOfWorldPulling = (camming.transform.position.x * (1 - effectParalalex));
        float disst = (camming.transform.position.x * effectParalalex);
        transform.position = new Vector3(starPos + disst, transform.position.y, transform.position.z);

        if (temporalityControlOfWorldPulling > starPos + leng)
            starPos += leng;
        else if (temporalityControlOfWorldPulling < starPos - leng)
            starPos -= leng;
    }
}
