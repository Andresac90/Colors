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
    //
    //
    public PlatformGenerator Distancia;
    public GameObject playertag;
    //physics variables
    public float speed;
    //private float moveSpeedStore;
    public float speedMultiplier;
    public float speedIncreaseMilestone;
    //private float speedIncreaseMilestoneStore;
    //private float speedMilestoneCountStore;
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
    //private Collider2D myCollider;
    //animation
    private Animator myAnimator;
    public GameManager2 theGameManager2;
    //deadSoundEffect
    //public AudioSource source; 
    //public AudioSource sourceHop;
    //public AudioSource sourcePlop;
    private bool dummyVar;
    public bool muerte = false;
    //dummyVar = false;

    // Start is called before the first frame update
    void Start()
    {
        muerte = false;
        myRigidBody = GetComponent<Rigidbody2D>();
        myAnimator = GetComponent<Animator>();
        jumpTimeCounter = jumpTime; //hold to jump
        speedMilestoneCount = speedIncreaseMilestone;
        //moveSpeedStore = speed;
        //speedMilestoneCountStore = speedMilestoneCount;
        //speedIncreaseMilestoneStore = speedIncreaseMilestone;
        playertag.gameObject.tag = "red";
    }

    //void DelayerCode()
    //{
    //    dummyVar = true;
    //    dummyVar = false;
    //}

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
        //speedrester = Random.Range(1.0f, 7.5f);
        //if (speed >= 26)
        //{
        //    speed = speed - speedrester;
        //}
        //distancia entre plataformas
        //if (speed < 18.5)
        //{
        //    Distancia.distanceBetween = 7;
        //    Distancia.distancebetweenMin = 6;
        //    Distancia.distancebetweenMax = 9;
        //    speedMultiplier = 1.1f;
        //    jumpForce = 17f;
        //}
        //if (speed >= 18.5 && speed < 22)
        //{
        //    Distancia.distanceBetween = 11;
        //    Distancia.distancebetweenMin = 10;
        //    Distancia.distancebetweenMax = 13;
        //    speedMultiplier = 1.07f;
        //    jumpForce = 17f;
        //}
        //if (speed >= 22 && speed < 25)
        //{
        //    Distancia.distanceBetween = 12;
        //    Distancia.distancebetweenMin = 11;
        //    Distancia.distancebetweenMax = 14;
        //    speedMultiplier = 1.06f;
        //    jumpForce = 16.8f;
        //}
        //if (speed >= 25)
        //{
        //    Distancia.distanceBetween = 12;
        //    Distancia.distancebetweenMin = 13;
        //    Distancia.distancebetweenMax = 15;
        //    speedMultiplier = 1.08f;
        //    jumpForce = 16.8f;
        //}
        //distancia entre plataformas
        if (Input.GetKeyDown(KeyCode.Space) || Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            //          para saltar cuando le picas al boton
            if (EventSystem.current.IsPointerOverGameObject(Input.touches[0].fingerId))
            {
                return;
            }
            //if (BotonPausa == true)
            //{
            //    return;
            //}
            //          para saltar cuando le picas al boton
            /*sourceHop.Play();*/ //play hop sfx
            if (grounded)
            {
                myRigidBody.velocity = new Vector2(myRigidBody.velocity.x, jumpForce); //myRigidBody.velocity.x
                jumpb = false;
                
            }

        }
        if (Input.GetKey(KeyCode.Space) || Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Stationary && !jumpb) //hold start 
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
        } //hold end 
        myAnimator.SetBool("Grounded", grounded);
    }
    //public void saltar()
    //{
    //    print("Hola");
    //}
    void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.tag == "killer")
        {

            //source.Play();
            //yield return new WaitForSeconds(1.6);
            //Invoke("DelayerCode", 2);
            //StartCoroutine(WaitForASecond());
            theGameManager2.ResetTutorial();
            //speed = 0;
            //speedMilestoneCount = speedMilestoneCountStore;
            //speedIncreaseMilestone = speedIncreaseMilestoneStore;

        }
        else if (other.gameObject.tag == "greenkiller" && playertag.gameObject.tag != "green")
        {

            //source.Play();
            //yield return new WaitForSeconds(1.6);
            //Invoke("DelayerCode", 2);
            //StartCoroutine(WaitForASecond());
            theGameManager2.ResetTutorial();
            //speed = 0;
            //speedMilestoneCount = speedMilestoneCountStore;
            //speedIncreaseMilestone = speedIncreaseMilestoneStore;
        }

        else if (other.gameObject.tag == "redkiller" && playertag.gameObject.tag != "red")
        {

            //source.Play();
            //yield return new WaitForSeconds(1.6);
            //Invoke("DelayerCode", 2);
            theGameManager2.ResetTutorial();
            //speed = 0;
            //speedMilestoneCount = speedMilestoneCountStore;
            //speedIncreaseMilestone = speedIncreaseMilestoneStore;
        }
        else if (other.gameObject.tag == "yellowkiller" && playertag.gameObject.tag != "yellow")
        {

            //source.Play();
            //yield return new WaitForSeconds(2);
            //Invoke("DelayerCode", 2);
            theGameManager2.ResetTutorial();
            //speed = 0;
            //speedMilestoneCount = speedMilestoneCountStore;
            //speedIncreaseMilestone = speedIncreaseMilestoneStore;
        }
        else if (other.gameObject.tag == "bluekiller" && playertag.gameObject.tag != "blue")
        {

            //source.Play();
            //yield return new WaitForSeconds(1.6);
            //Invoke("DelayerCode", 2);
            theGameManager2.ResetTutorial();
            //speed = 0;
            //speedMilestoneCount = speedMilestoneCountStore;
            //speedIncreaseMilestone = speedIncreaseMilestoneStore;
        }
        myAnimator.SetBool("Muerte", muerte);
        //else if (transform.position.x > 35)
        //{
        //    sourcePlop.Play();
        //}

    }

    //IEnumerator WaitForASecond()
    //{
    //    yield return new WaitForSeconds(2);
    //}

}