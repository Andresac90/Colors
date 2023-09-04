using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
public class TutorialManager : MonoBehaviour
{
    public movimientotutorial Player2;
    public GameObject TutorialJumpScoretext;
    public GameObject TutorialColorChanges;
    public GameObject tutorialend;
    public GameObject playertag;
    public GameObject botones;
    private IEnumerator coroutine;
    

    public GameManager2 manager;
    public IEnumerator Start()
    {
        
        playertag.gameObject.tag = "ola";
        botones.gameObject.SetActive(false);
        Time.timeScale = 1f;
        TutorialColorChanges.gameObject.SetActive(false);
        Player2.jumpForce = 0;
        TutorialJumpScoretext.gameObject.SetActive(false);
        
        yield return new WaitForSeconds(1.3f);
        
        Player2.jumpForce = 17f;
        Time.timeScale = 0.18f;
        TutorialJumpScoretext.gameObject.SetActive(true);

        coroutine = WaitAndPrint(21f);
        StartCoroutine(coroutine);
    }
    public void reiniciar()
    {
        //Player2.jumpForce = 0;
        Player2.jumpForce = 17f;
        Player2.grounded = true;
        playertag.gameObject.tag = "ola";
        tutorialend.gameObject.SetActive(false);
        botones.gameObject.SetActive(false);
        Time.timeScale = 1f;
        TutorialColorChanges.gameObject.SetActive(false);
        
        TutorialJumpScoretext.gameObject.SetActive(false);
        //StartCoroutine(Wait());
        //Time.timeScale = 0f;
        TutorialJumpScoretext.gameObject.SetActive(true);
        
    }
    //IEnumerator Wait()
    //{
    //    yield return new WaitForSeconds(2f);

    //}
    // Update is called once per frame
    void Update()
    {
        
        if (Player2.grounded is false)
        {
            tutorialend.gameObject.SetActive(false);
            TutorialColorChanges.gameObject.SetActive(true);
            TutorialJumpScoretext.gameObject.SetActive(false);
            botones.gameObject.SetActive(true);
            //Time.timeScale = 1f;
            //StartCoroutine(WaitForIt());
            Time.timeScale = 0.19f;
        }
        if (playertag.gameObject.tag == "green")
        {
            
            Time.timeScale = 1f;
            TutorialColorChanges.gameObject.SetActive(false);
            tutorialend.gameObject.SetActive(true);

        }
        if (playertag.gameObject.tag == "blue")
        {
            
            Time.timeScale = 1f;
            TutorialColorChanges.gameObject.SetActive(false);
            tutorialend.gameObject.SetActive(true);

        }
        if (playertag.gameObject.tag == "yellow")
        {
            
            Time.timeScale = 1f;
            TutorialColorChanges.gameObject.SetActive(false);
            tutorialend.gameObject.SetActive(true);

        }

        if (playertag.gameObject.tag == "red")
        {
            
            Time.timeScale = 1f;
            TutorialColorChanges.gameObject.SetActive(false);
            tutorialend.gameObject.SetActive(true);
        }
        //while (playertag.gameObject.tag != "red")
        //{
        //    Time.timeScale = 1f;
        //    TutorialColorChanges.gameObject.SetActive(false);
        //    tutorialend.gameObject.SetActive(true);
        //    coroutine = WaitAndPrint(20f);
        //    StartCoroutine(coroutine);
        //}

    }
    private IEnumerator WaitAndPrint(float waitTime)
    {
        //yield return new WaitForSeconds(waitTime);
        //manager.ResetTutorial();
        while (true)
        {
            yield return new WaitForSeconds(waitTime);
            SceneManager.LoadScene(6);
        }
    }
    
}
