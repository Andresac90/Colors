using System.Collections;
using UnityEngine;

public class GameManager2 : MonoBehaviour
{
    public PlatformGenerator Distancia2;
    public Transform platformGenerator;
    //tutorial
    public TutorialManager tutorial;
    public movimientotutorial thePlayer2;
    private Vector3 platformStartPoint2;
    private Vector3 playerStartPoint2;
    //tutorial
    //private Vector3 platformStartPoint;
    //public movement thePlayer;
    //private Vector3 playerStartPoint;
    private PlatformDestroyer[] platformList;
    //public DeathMenu deathscreen;
    public GameObject Buttons;
    //public GameObject Pause;
    public GameObject playertag;
    //public AudioSource oofSauce;
    // Start is called before the first frame update
    void Start()
    {
        //platformStartPoint = platformGenerator.position;
        //playerStartPoint = thePlayer.transform.position;
        platformStartPoint2 = platformGenerator.position;
        playerStartPoint2 = thePlayer2.transform.position;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void RestartGame()
    {
        //oofSauce.Play();
        thePlayer2.muerte = true;
        StartCoroutine(WaitForIt_Death2());
        Buttons.gameObject.SetActive(false);
        //Pause.gameObject.SetActive(false);
        //StartCoroutine("RestartGameCo");
    }

    //public void Reset()
    //{
    //    thePlayer.muerte = false;
    //    playertag.gameObject.tag = "red";
    //    deathscreen.gameObject.SetActive(false);
    //    Buttons.gameObject.SetActive(true);
    //    Pause.gameObject.SetActive(true);
    //    platformList = FindObjectsOfType<PlatformDestroyer>();
    //    thePlayer.speed = 10.26316f;
    //    thePlayer.speedIncreaseMilestone = 100;
    //    thePlayer.speedMilestoneCount = 100;
    //    Distancia2.distanceBetween = 7;
    //    Distancia2.distancebetweenMin = 6;
    //    Distancia2.distancebetweenMax = 9;
    //    thePlayer.speedMultiplier = 1.1f;
    //    thePlayer.jumpForce = 16.7f;
    //    for (int i = 0; i < platformList.Length; i++)
    //    {
    //        platformList[i].gameObject.SetActive(false);
    //    }

    //    thePlayer.transform.position = playerStartPoint;

    //    platformGenerator.position = platformStartPoint;

    //    thePlayer.gameObject.SetActive(true);
    //}
    public void ResetTutorial()
    {
        //oofSauce.Play();
        thePlayer2.muerte = true;
        thePlayer2.muerte = false;

        //StartCoroutine(WaitForIt_Death2());
        Buttons.gameObject.SetActive(false);

        playertag.gameObject.tag = "red";
        //deathscreen.gameObject.SetActive(false);
        Buttons.gameObject.SetActive(true);
        //Pause.gameObject.SetActive(true);
        platformList = FindObjectsOfType<PlatformDestroyer>();
        thePlayer2.gameObject.SetActive(false);

        for (int i = 0; i < platformList.Length; i++)
        {
            platformList[i].gameObject.SetActive(false);
        }

        thePlayer2.transform.position = playerStartPoint2;

        platformGenerator.position = platformStartPoint2;

        thePlayer2.gameObject.SetActive(true);
        tutorial.reiniciar();
        

    }
    //IEnumerator WaitForIt_Death()
    //{
    //    yield return new WaitForSeconds(1);
    //    thePlayer.gameObject.SetActive(false);
    //    deathscreen.gameObject.SetActive(true);
    //    deathscreen.beetlesauce.Play();
    //    deathscreen.beetlesauce.loop = true;
    //}
    IEnumerator WaitForIt_Death2()
    {
        yield return new WaitForSeconds(1.3f);
        //thePlayer2.gameObject.SetActive(false);
        //deathscreen.gameObject.SetActive(true);
        //deathscreen.beetlesauce.Play();
        //deathscreen.beetlesauce.loop = true;
    }

    public IEnumerator RestartGameCo()
    {
        thePlayer2.gameObject.SetActive(false);

        yield return new WaitForSeconds(0.5f);

        platformList = FindObjectsOfType<PlatformDestroyer>();

        for (int i = 0; i < platformList.Length; i++)
        {
            platformList[i].gameObject.SetActive(false);
        }

        thePlayer2.transform.position = playerStartPoint2;

        platformGenerator.position = platformStartPoint2;

        thePlayer2.gameObject.SetActive(true);
        tutorial.Start();
    }
}
