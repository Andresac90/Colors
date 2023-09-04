using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Camera : MonoBehaviour
{
    public movement thePlayer;
    private Vector3 lastPlayer;
    private float distancetomove;
    private float distancetomovey;
    // Start is called before the first frame update
    void Start()
    {
        thePlayer = FindObjectOfType<movement>();
        lastPlayer = thePlayer.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        distancetomove = thePlayer.transform.position.x - lastPlayer.x;
        //distancetomovey = thePlayer.transform.position.y - lastPlayer.y;
        transform.position = new Vector3(transform.position.x + distancetomove, transform.position.y, transform.position.z);
        lastPlayer = thePlayer.transform.position;
    }
}
