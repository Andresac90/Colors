using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadTutorial2 : MonoBehaviour
{
    void Start()
    {
        Time.timeScale = 1f;
        StartCoroutine(LoadAsynchronously());
    }
    IEnumerator LoadAsynchronously()
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync(0);
        operation.allowSceneActivation = false;
        yield return new WaitForSeconds(1.2f);
        operation.allowSceneActivation = true;
        while (!operation.isDone)
        {
            yield return null;
        }


    }

}
