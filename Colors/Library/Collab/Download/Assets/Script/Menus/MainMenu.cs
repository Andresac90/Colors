using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public AudioSource StartSound;
    public AudioSource MenuSound;
    public void PlayGame()
    {
        StartSound.Play();
        SceneManager.LoadScene(1);
    }
    public void PlayTutorial()
    {
        StartSound.Play();
        SceneManager.LoadScene(5);
    }
    public void Store()
    {
        MenuSound.Play();
    }
    
    public void SonidoComprar()
    {
        StartSound.Play();
    }

    public void Leaderboardsound()
    {
        MenuSound.Play();
    }
    public void Credits()
    {
        MenuSound.Play();
    }

    public void Quit()
    {
        Debug.Log("QUIT!");
        Application.Quit();
    }
}
