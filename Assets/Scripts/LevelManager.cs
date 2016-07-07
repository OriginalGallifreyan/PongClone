using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class LevelManager : MonoBehaviour {
	
	public Text waitText;
	public bool isPlaying;
	public Referee referee;

	void Update() {
		var activeSceneIndex = SceneManager.GetActiveScene ().buildIndex;
		if (activeSceneIndex == 0)
			StartLevel ();
		else if (activeSceneIndex == 1)
			GameLevel ();
	}

	void StartLevel() {
		if (Input.anyKeyDown)
			SceneManager.LoadScene (SceneManager.GetActiveScene ().buildIndex + 1);
	}
	
	void GameLevel() {
		if (waitText.enabled && Input.anyKeyDown) {
			waitText.enabled = false;
			isPlaying = true;
			GameObject.FindObjectOfType<Referee> ().StartMatch ();
		}
		if (this.isPlaying && !referee.isPlaying) {
			waitText.enabled = true;
		}
	}

	public void LoadWinLevel() {
		SceneManager.LoadScene ("Win");
	}

	public void LoadLoseLevel() {
		SceneManager.LoadScene ("Lose");
	}
}
