using UnityEngine;
using System.Collections;

public class LoseCollider : MonoBehaviour {

	LevelManager levelManager;

	void Start() {
		levelManager = GameObject.FindObjectOfType<LevelManager>();
	}

	void OnCollisionEnter2D(Collision2D collision) {
		if (collision.gameObject.name == "Ball") {
			levelManager.LoadLoseLevel ();
		}
	}
}
