using System.Collections;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public PlatformGenerator Distancia2;
    public Transform platformGenerator;
    
    private Vector3 platformStartPoint;
    public movement thePlayer;
    private Vector3 playerStartPoint;
    //private Vector3 playerStartHeight;
    private PlatformDestroyer[] platformList;
    public DeathMenu deathscreen;
    public GameObject Buttons;
    public GameObject Pause;
    public GameObject playertag;
    public AudioSource oofSauce;
    // Start is called before the first frame update
    void Start()
    {
        platformStartPoint = platformGenerator.position;
        playerStartPoint = thePlayer.transform.position;
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void RestartGame()
    {
        oofSauce.Play();
        thePlayer.muerte = true;
        StartCoroutine(WaitForIt_Death());
        Buttons.gameObject.SetActive(false);
        Pause.gameObject.SetActive(false);
        //StartCoroutine("RestartGameCo");
    }
    public void ResumeGame()
    {
        thePlayer.muerte = false;
        //thePlayer.speedtracker = thePlayer.speed;
        deathscreen.gameObject.SetActive(false);
        Buttons.gameObject.SetActive(true);
        Pause.gameObject.SetActive(true);
        thePlayer.gameObject.SetActive(true);
        deathscreen.resumee.gameObject.SetActive(false);
        deathscreen.restart.gameObject.SetActive(false);
        deathscreen.restart2.gameObject.SetActive(true);
        deathscreen.secondchance.gameObject.SetActive(false);
        thePlayer.speed = thePlayer.speedtracker-(thePlayer.speedtracker*.15f);
        thePlayer.tag = thePlayer.tagger;
        deathscreen.yess = false;
        StartCoroutine(WaitForIt_Death3());
    }

    public void Reset()
    {
        thePlayer.muerte = false;
        playertag.gameObject.tag = "red";
        deathscreen.gameObject.SetActive(false);
        Buttons.gameObject.SetActive(true);
        Pause.gameObject.SetActive(true);
        platformList = FindObjectsOfType<PlatformDestroyer>();
        thePlayer.speed = 10.26316f;
        thePlayer.speedIncreaseMilestone = 100;
        thePlayer.speedMilestoneCount = 100;
        Distancia2.distanceBetween = 7;
        Distancia2.distancebetweenMin = 6;
        Distancia2.distancebetweenMax = 9;
        thePlayer.speedMultiplier = 1.1f;
        thePlayer.jumpForce = 17f;
        for (int i = 0; i < platformList.Length; i++)
        {
            platformList[i].gameObject.SetActive(false);
        }

        thePlayer.transform.position = playerStartPoint;

        platformGenerator.position = platformStartPoint;

        thePlayer.gameObject.SetActive(true);
    }
    
    IEnumerator WaitForIt_Death()
    {
        yield return new WaitForSeconds(1);
        thePlayer.gameObject.SetActive(false);
        deathscreen.gameObject.SetActive(true);
        deathscreen.beetlesauce.Play();
        deathscreen.beetlesauce.loop = true;
    }
    IEnumerator WaitForIt_Death3()
    {
        yield return new WaitForSeconds(45);
        deathscreen.secondchance.gameObject.SetActive(true);
        deathscreen.restart.gameObject.SetActive(true);
        deathscreen.restart2.gameObject.SetActive(false);
    }


    //public IEnumerator RestartGameCo()
    //{
    //    thePlayer.gameObject.SetActive(false);

    //    yield return new WaitForSeconds(0.5f);

    //    platformList = FindObjectsOfType<PlatformDestroyer>();

    //    for (int i = 0; i < platformList.Length; i++)
    //    {
    //        platformList[i].gameObject.SetActive(false);
    //    }

    //    thePlayer.transform.position = playerStartPoint;

    //    platformGenerator.position = platformStartPoint;

    //    thePlayer.gameObject.SetActive(true);
    //}
}
