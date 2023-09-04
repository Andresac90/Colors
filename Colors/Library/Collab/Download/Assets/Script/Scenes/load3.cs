using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class load3 : MonoBehaviour
{
    void Start()
    {
        StartCoroutine(LoadAsynchronously());
    }
    IEnumerator LoadAsynchronously()
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync(4);
        operation.allowSceneActivation = false;
        yield return new WaitForSeconds(1.2f);
        operation.allowSceneActivation = true;
        while (!operation.isDone)
        {
            yield return null;
        }


    }

}
