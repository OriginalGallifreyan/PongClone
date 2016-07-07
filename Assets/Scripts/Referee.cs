using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Referee : MonoBehaviour {

	private int playerScore;
	private int enemyScore;

	public int maxScore;
	public Text playerScoreboard;
	public Text enemyScoreboard;
	public Ball ball;
	public bool isPlaying;

	// Use this for initialization
	void Start () {
		playerScore = 0;
		enemyScore = 0;
	}

	void Update() {
		if (ball.isScored) {
			Debug.Log (ball.lastHitBy);
			if (ball.lastHitBy == "Player")
				ScorePlayer (1);
			if (ball.lastHitBy == "Enemy")
				ScorePlayer (1);
			ball.Reset ();
		}
	}

	public void StartMatch() {
		this.isPlaying = true;
		ball.Launch ();
		UpdateScore ();
	}

	public void ScorePlayer(int increment) {
		playerScore += increment;
		UpdateScore ();
		this.isPlaying = false;
		CheckEndOfMatch ();
	}

	public void ScoreEnemy(int increment) {
		enemyScore += increment;
		UpdateScore ();
		this.isPlaying = false;
		CheckEndOfMatch ();
	}

	void UpdateScore() {
		playerScoreboard.text = playerScore.ToString();
		enemyScoreboard.text = enemyScore.ToString();
	}

	void CheckEndOfMatch() {
		if (enemyScore >= maxScore)
			GameObject.FindObjectOfType<LevelManager> ().LoadLoseLevel ();
		if (playerScore >= maxScore)
			GameObject.FindObjectOfType<LevelManager> ().LoadWinLevel ();
	}
}
