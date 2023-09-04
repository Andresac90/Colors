using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Security.AccessControl;
using System.Threading;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class movimientotutorial : MonoBehaviour
{
    //tags
    public PlatformGenerator Distancia;
    public GameObject playertag;

    //physics variables
    public float speed;
    public float speedMultiplier;
    public float speedIncreaseMilestone;
    public float jumpForce;
    public float speedMilestoneCount;
    public float speedlimit;
    public float jumpTime; //para hold to jump
    private float jumpTimeCounter; //hold
    private bool jumpb;
    private float speedrester;

    //ground
    private Rigidbody2D myRigidBody;
    public bool grounded;
    public LayerMask whatIsGround;
    public Transform groundCheck;
    public float groundCheckRadius;


    //animation
    private Animator myAnimator;
    public GameManager2 theGameManager2;

    //sonido
    private bool dummyVar;
    public bool muerte = false;


    // Start is called before the first frame update
    void Start()
    {
        muerte = false;
        myRigidBody = GetComponent<Rigidbody2D>();
        myAnimator = GetComponent<Animator>();
        jumpTimeCounter = jumpTime; //hold to jump
        speedMilestoneCount = speedIncreaseMilestone;
        playertag.gameObject.tag = "ola";
    }

    void Update()
    {
        grounded = Physics2D.OverlapCircle(groundCheck.position, groundCheckRadius, whatIsGround);
        if (transform.position.x > speedMilestoneCount && speed <= speedlimit)
        {
            speedMilestoneCount += speedIncreaseMilestone;
            speedIncreaseMilestone = (speedIncreaseMilestone * speedMultiplier);
            speed = speed * speedMultiplier;
        }
        myRigidBody.velocity = new Vector2(speed, myRigidBody.velocity.y);
        if (Input.GetKeyDown(KeyCode.Space) || Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            //para saltar cuando le picas al boton
            if (EventSystem.current.IsPointerOverGameObject(Input.touches[0].fingerId))
            {
                return;
            }

            if (grounded)
            {
                myRigidBody.velocity = new Vector2(myRigidBody.velocity.x, jumpForce); //myRigidBody.velocity.x
                jumpb = false;
                
            }

        }
        //hold start
        if (Input.GetKey(KeyCode.Space) || Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Stationary && !jumpb)  
        {
            if (jumpTimeCounter > 0)
            {
                myRigidBody.velocity = new Vector2(myRigidBody.velocity.x, jumpForce);
                jumpTimeCounter -= Time.deltaTime;
            }

        }
        if (Input.GetKeyUp(KeyCode.Space) || Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
        {

            jumpTimeCounter = 0;
            jumpb = true;
        }
        if (grounded)
        {
            jumpTimeCounter = jumpTime;
        } 
        //hold end 

        myAnimator.SetBool("Grounded", grounded);
    }

    void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.tag == "killer")
        {
            theGameManager2.ResetTutorial();
        }
        else if (other.gameObject.tag == "greenkiller" && playertag.gameObject.tag != "green")
        {
            theGameManager2.ResetTutorial();
        }

        else if (other.gameObject.tag == "redkiller" && playertag.gameObject.tag != "red")
        {
            theGameManager2.ResetTutorial();
        }
        else if (other.gameObject.tag == "yellowkiller" && playertag.gameObject.tag != "yellow")
        {
            theGameManager2.ResetTutorial();
        }
        else if (other.gameObject.tag == "bluekiller" && playertag.gameObject.tag != "blue")
        {
            theGameManager2.ResetTutorial();
        }

        myAnimator.SetBool("Muerte", muerte);

    }
}