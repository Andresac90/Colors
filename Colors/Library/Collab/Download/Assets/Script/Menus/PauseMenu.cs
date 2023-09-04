using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    public static bool GameIsPaused = false;
    public GameObject pauseMenuUI;
    public AudioSource PauseSound;
    public AudioSource MenuSound;
    public VibrateSettings vibrateactive;
    // Update is called once per frame
    public void LoadMenu()
    {
        MenuSound.Play();
        pauseMenuUI.SetActive(false);
        Time.timeScale = 1f;
        GameIsPaused = false;
        SceneManager.LoadScene(3);
        Time.timeScale = 1f;
    }
    public void LoadMenuTutorial()
    {
        MenuSound.Play();
        SceneManager.LoadScene(6);
    }
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (GameIsPaused)
            {
                Resume();
            } else
            {
                Pause();
            }
        }
    }
    public void PAUSE()
    {
        if (GameIsPaused)
        {
            Resume();
        }
        else
        {
            Pause();
        }
    }
    public void Resume()
    {
        PauseSound.Play();
        if (vibrateactive.vibrateBoolActivate == true)
        {
            Vibration.VibratePop();
        }
        pauseMenuUI.SetActive(false);
        Time.timeScale = 1f;
        GameIsPaused = false;
    }
    void Pause()
    {
        PauseSound.Play();
        if (vibrateactive.vibrateBoolActivate == true)
        {
            Vibration.VibratePop();
        }
        pauseMenuUI.SetActive(true);
        Time.timeScale = 0f;
        GameIsPaused = true;
    }
    public void Sound()
    {
        MenuSound.Play();
    }
    public void QuitGame()
    {
        Application.Quit();
    }
}
