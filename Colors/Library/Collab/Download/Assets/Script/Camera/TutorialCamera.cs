using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialCamera : MonoBehaviour
{
    public movimientotutorial thePlayer2;
    private Vector3 lastPlayer2;
    private float distancetomove2;
    private float distancetomovey;
    // Start is called before the first frame update
    void Start()
    {
        thePlayer2 = FindObjectOfType<movimientotutorial>();
        lastPlayer2 = thePlayer2.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        distancetomove2 = thePlayer2.transform.position.x - lastPlayer2.x;
        //distancetomovey = thePlayer.transform.position.y - lastPlayer.y;
        transform.position = new Vector3(transform.position.x + distancetomove2, transform.position.y, transform.position.z);
        lastPlayer2 = thePlayer2.transform.position;
    }
}
