using UnityEngine;
using System.Collections;

public class Paddle : MonoBehaviour {

	public float movementSpeed;
	public bool isPlayer;

	private float speedMultiplier;
	private float screenHeightInWorldUnits;
	private float paddleHalfWidth;
	private Ball ball;

	void Start() {
		screenHeightInWorldUnits = Camera.main.ScreenToWorldPoint(new Vector2(Screen.width, Screen.height)).y;
		paddleHalfWidth = gameObject.GetComponent<BoxCollider2D> ().bounds.size.y / 2.0f;
		ball = GameObject.FindObjectOfType<Ball> ();
		speedMultiplier = 0.1f;
	}
	
	// Update is called once per frame
	void Update () {
		if (isPlayer)
			CalculatePlayerMovement ();
		else
			CalculateComputerMovement ();
	}

	void CalculatePlayerMovement() {
		if (Input.GetKey (KeyCode.UpArrow)) {
			var position = gameObject.transform.position;
			position.y = Mathf.Clamp(position.y + (movementSpeed * speedMultiplier), (screenHeightInWorldUnits * -1) + paddleHalfWidth, screenHeightInWorldUnits - paddleHalfWidth);
			gameObject.transform.position = position;
		}
		if (Input.GetKey (KeyCode.DownArrow)){
			var position = gameObject.transform.position;
			position.y = Mathf.Clamp(position.y - (movementSpeed * speedMultiplier), (screenHeightInWorldUnits * -1) + paddleHalfWidth, screenHeightInWorldUnits - paddleHalfWidth);
			gameObject.transform.position = position;
		}
	}

	void CalculateComputerMovement() {
		if (ball.transform.position.x >= 0 && 
			ball.GetComponent<Rigidbody2D>().velocity.x > 0 &&
			ball.transform.position.x < transform.position.x
		) {
			var position = gameObject.transform.position;
			var direction = (ball.transform.position.y > position.y) ? 1 : -1;
			position.y += movementSpeed * speedMultiplier * direction;
			gameObject.transform.position = position;
		}
	}
}
