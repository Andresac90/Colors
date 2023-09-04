using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class Scaler : MonoBehaviour
{
    public bool Android;
    public bool tablet;
    public CanvasScaler scaler;
    public Button Red;
    public Button Blue;
    public Button Green;
    public Button Yellow;

    public RectTransform Leaderboard;
    public Button BackMenu;
    

    public GameObject pauseUI;
    public GameObject LeaderUI;
    public GameObject DeathUI;
    public Button Back1;
    public Button Back2;
    public Button Back3;
    public Button Back4;
    public Button Back5;
    public RectTransform Logo;
    public RectTransform LogoN;

    public GameObject scoremenu;
    public GameObject pausemenu;

    public Text Tut1;
    public Text Tut2;
    public Text Tut3;

    // Start is called before the first frame update
    void Start()
    {

#if UNITY_IOS
        Android = false;
        tablet = false;
        Scene scene = SceneManager.GetActiveScene();
        var identifier = SystemInfo.deviceModel;
        Debug.Log(identifier);
        if (identifier.StartsWith("iPhone"))
        {
            if(scene.name == "Juego")
            {
                if (PlayerPrefs.HasKey("AdFree"))
                {
                    scoremenu.transform.position = scoremenu.transform.position + new Vector3(0, 0, 0);
                    pausemenu.transform.position = pausemenu.transform.position + new Vector3(0, 0, 0);
                }
                else
                {
                    scoremenu.transform.position = scoremenu.transform.position + new Vector3(0, -30, 0);
                    pausemenu.transform.position = pausemenu.transform.position + new Vector3(0, -30, 0);
                }
                
            }
            if (scene.name == "Menu")
            {
                scaler.referenceResolution = new Vector2(3550, 1248);
            }
            if (scene.name == "Tutorial")
            {
                Tut1.fontSize = 260;
                Tut2.fontSize = 260;
                Tut3.fontSize = 260;
            }
        }
        else if (identifier.StartsWith("iPad"))
        {
            scaler.referenceResolution = new Vector2(3500, 1248);

            if (scene.name == "Juego")
            {
                Leaderboard.transform.localScale = new Vector3(1.85f, 1.85f, 1.85f);
                Red.transform.position = Red.transform.position + new Vector3(-180, 0, 0);
                Green.transform.position = Green.transform.position + new Vector3(-180, -10, 0);
                Blue.transform.position = Blue.transform.position + new Vector3(180, 0, 0);
                Yellow.transform.position = Yellow.transform.position + new Vector3(180, -10, 0);
                scoremenu.transform.position = scoremenu.transform.position + new Vector3(0, 20, 0);
                pausemenu.transform.position = pausemenu.transform.position + new Vector3(0, 20, 0);
            }
            if (scene.name == "Tutorial")
            {
                BackMenu.transform.position = BackMenu.transform.position + new Vector3(0, 180, 0);
                Red.transform.position = Red.transform.position + new Vector3(-180, 0, 0);
                Green.transform.position = Green.transform.position + new Vector3(-180, -10, 0);
                Blue.transform.position = Blue.transform.position + new Vector3(180, 0, 0);
                Yellow.transform.position = Yellow.transform.position + new Vector3(180, -10, 0);
            }
            if (scene.name == "Menu")
            {
                Back1.transform.position = Back1.transform.position + new Vector3(0, 25, 0);
                Back2.transform.position = Back2.transform.position + new Vector3(0, 25, 0);
                Back3.transform.position = Back3.transform.position + new Vector3(0, 25, 0);
                Back4.transform.position = Back4.transform.position + new Vector3(0, 25, 0);
                Back5.transform.position = Back5.transform.position + new Vector3(0, 25, 0);
                Logo.transform.position = Logo.transform.position + new Vector3(0, -75, 0);
                LogoN.transform.position = LogoN.transform.position + new Vector3(0, -143, 0);
            }
        }

    }
    void Update()
    {
        Scene scene = SceneManager.GetActiveScene();
        var identifier = SystemInfo.deviceModel;
        if (identifier.StartsWith("iPhone"))
        {
            if (scene.name == "Juego" & pauseUI.activeInHierarchy == false & LeaderUI.activeInHierarchy == false & DeathUI.activeInHierarchy == false)
            {
                scaler.referenceResolution = new Vector2(2688, 1248);
            }
            if (pauseUI.activeInHierarchy == true & scene.name == "Juego")
            {
                scaler.referenceResolution = new Vector2(3000, 1248);
            }
            if (LeaderUI.activeInHierarchy == true & scene.name == "Juego")
            {
                scaler.referenceResolution = new Vector2(3000, 1248);
            }
            if (DeathUI.activeInHierarchy == true & scene.name == "Juego")
            {
                scaler.referenceResolution = new Vector2(3000, 1248);
            }
        }
        
    }
}

#endif

#if UNITY_ANDROID
        Android = true;
        tablet = false;
        Scene scene = SceneManager.GetActiveScene();
        if (Android == true)
        {
            scaler.referenceResolution = new Vector2(2960, 1440);

            if (scene.name == "Tutorial")
            {
                Tut1.fontSize = 300;
                Tut2.fontSize = 300;
                Tut3.fontSize = 300;
            }
        }
        if (tablet == true)
            {
                scaler.referenceResolution = new Vector2(3600, 1248);
                Red.transform.position = Red.transform.position + new Vector3(-180, 0, 0);
                Green.transform.position = Green.transform.position + new Vector3(-180, -10, 0);
                Blue.transform.position = Blue.transform.position + new Vector3(180, 0, 0);
                Yellow.transform.position = Yellow.transform.position + new Vector3(180, -10, 0);
                Leaderboard.transform.localScale = new Vector3(1.85f, 1.85f, 1.85f);
                BackMenu.transform.position = BackMenu.transform.position + new Vector3(0, 180, 0);
            }

        }
    }
#endif



