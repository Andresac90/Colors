using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using UnityEngine.UI;

public class ScoreManager : MonoBehaviour
{
    public Transform Player;
    public Text Scoretext;
    public Text HighScoreText;
    public float scoreCount;
    public float HighScoreCount;
    public bool scoreIncreasing;
    // Start is called before the first frame update
    void Start()
    {
        if (PlayerPrefs.HasKey("HighScore"))
        {
            HighScoreCount = PlayerPrefs.GetFloat("HighScore");
        }
    }

    // Update is called once per frame
    void Update()
    {
        scoreCount = float.Parse(Player.position.x.ToString("0"));
        
        if(scoreCount > HighScoreCount)
        {
            HighScoreCount = scoreCount;
            PlayerPrefs.SetFloat("HighScore", HighScoreCount);
        }
        Scoretext.text = "Score: " + scoreCount;
        HighScoreText.text = "High Score: " + HighScoreCount;
    }
}
