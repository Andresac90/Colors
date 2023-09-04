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

public class movement : MonoBehaviour
{
    //tagger
    public string tagger;
    public bool deathonground = false;

    //para second chance
    public PlatformGenerator Distancia;
    public GameObject playertag;
    public GameObject BotonPausa;

    //physics variables
    public float speed;
    private float speedrester;
    public float speedtracker;
    public float speedMultiplier;
    public float speedIncreaseMilestone;
    public float jumpForce;
    public float speedMilestoneCount;
    public float speedlimit;
    public float jumpTime; //para hold to jump
    private float jumpTimeCounter; //hold
    private bool jumpb;
    public DeathMenu deathscreen2;

    //ground
    private Rigidbody2D myRigidBody;
    public bool grounded;
    public LayerMask whatIsGround;
    public Transform groundCheck;
    public float groundCheckRadius;

    //animation
    private Animator myAnimator;
    public GameManager theGameManager;

    //Sonidos
    //public AudioSource sourceHop;
    //public AudioSource sourcePlop;

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
        playertag.gameObject.tag = "red";
    }

    // Update is called once per frame
    void Update()
    {
        //grounded = Physics2D.IsTouchingLayers(myCollider, whatIsGround);
        grounded = Physics2D.OverlapCircle(groundCheck.position, groundCheckRadius, whatIsGround);
        if (transform.position.x > speedMilestoneCount && speed <= speedlimit)
        {
            speedMilestoneCount += speedIncreaseMilestone;
            speedIncreaseMilestone = (speedIncreaseMilestone * speedMultiplier);
            speed = speed * speedMultiplier;
        }
        myRigidBody.velocity = new Vector2(speed, myRigidBody.velocity.y);
        
        //rester de velocidad limite
        speedrester = Random.Range(1.0f, 5.5f);
        //distancia entre plataformas
        if (speed < 14)
        {
            Distancia.distanceBetween = 7;
            Distancia.distancebetweenMin = 6;
            Distancia.distancebetweenMax = 9;
            speedMultiplier = 1.1f;
            //jumpForce = 17f;
            myRigidBody.gravityScale = 3.1f;
            jumpForce = 18.7f;
        }

        if (speed >= 14 && speed < 18.5)
        {
            Distancia.distanceBetween = 7;
            Distancia.distancebetweenMin = 6;
            Distancia.distancebetweenMax = 9;
            speedMultiplier = 1.15f;
            //jumpForce = 17f;
            myRigidBody.gravityScale = 3.2f;
            jumpForce = 17.7f;
        }

        if (speed >= 18.5 && speed < 22)
        {
            Distancia.distanceBetween = 11;
            Distancia.distancebetweenMin = 10;
            Distancia.distancebetweenMax = 13;
            speedMultiplier = 1.2f;
            myRigidBody.gravityScale = 3.3f;
            jumpForce = 16.7f;
        }

        if (speed >= 22 && speed < 25)
        {
            Distancia.distanceBetween = 12;
            Distancia.distancebetweenMin = 12;
            Distancia.distancebetweenMax = 14;
            speedMultiplier = 1.06f;
            jumpForce = 16.4f;
            myRigidBody.gravityScale = 3.5f;
        }

        if (speed >= 25 && speed < 28)
        {
            Distancia.distanceBetween = 12;
            Distancia.distancebetweenMin = 13;
            Distancia.distancebetweenMax = 15;
            speedMultiplier = 1.03f;
            myRigidBody.gravityScale = 3.9f;
            jumpForce = 16.2f;
        }

        if (speed >= 28 && speed < 32)
        {
            Distancia.distanceBetween = 12;
            Distancia.distancebetweenMin = 13;
            Distancia.distancebetweenMax = 15;
            speedMultiplier = 1.04f;
            myRigidBody.gravityScale = 4.4f;
            jumpForce = 16.0f;
        }

        if (speed >= 32)
        {
            speed = speed - speedrester;
            Distancia.distanceBetween = 12.5f;
            Distancia.distancebetweenMin = 13.5f;
            Distancia.distancebetweenMax = 15.5f;
            myRigidBody.gravityScale = 4.5f;
            jumpForce = 15.8f;
        }
        //distancia entre plataformas


        if (Input.GetKeyDown(KeyCode.Space) || Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            //para saltar cuando le picas al boton
            if (grounded)
            {
                if (EventSystem.current.IsPointerOverGameObject(Input.touches[0].fingerId))
                {
                    return;
                }

                else
                {
                    myRigidBody.velocity = new Vector2(myRigidBody.velocity.x, jumpForce); //myRigidBody.velocity.x
                    jumpb = false;
                } 
            }

            /*sourceHop.Play();*/ //play hop sfx
             
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

    //Death Collision
    void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.tag == "killer")
        {
            speed = 0;
            deathonground = true;
            theGameManager.RestartGame();

            if (deathonground == true)
            {
                deathscreen2.secondchance.gameObject.SetActive(false);
            }
        }

        else if (other.gameObject.tag == "greenkiller" && playertag.gameObject.tag != "green")
        {
            theGameManager.RestartGame();
            speedtracker = speed;
            speed = 0;
            tagger = "green";
        }

        else if (other.gameObject.tag == "redkiller" && playertag.gameObject.tag != "red")
        {
            theGameManager.RestartGame();
            speedtracker = speed;
            speed = 0;
            tagger = "red";
        }

        else if (other.gameObject.tag == "yellowkiller" && playertag.gameObject.tag != "yellow")
        {
            theGameManager.RestartGame();
            speedtracker = speed;
            speed = 0;
            tagger = "yellow";
        }

        else if (other.gameObject.tag == "bluekiller" && playertag.gameObject.tag != "blue")
        {
            theGameManager.RestartGame();
            speedtracker = speed;
            speed = 0;
            tagger = "blue";
        }

        myAnimator.SetBool("Muerte", muerte);

    }


}