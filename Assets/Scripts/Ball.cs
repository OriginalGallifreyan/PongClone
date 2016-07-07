using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {

	public float speed;
	public string lastHitBy;
	public bool isScored;

	Vector2 velocity;

	// Use this for initialization
	void Start () {
		gameObject.GetComponent<Rigidbody2D> ().gravityScale = 0;
		isScored = false;
		lastHitBy = "Enemy";
	}
	
	void OnCollisionEnter2D(Collision2D collision) {
		switch (collision.gameObject.name)
		{
		case "TopBound":
			velocity.y = velocity.y * -1;
			break;
		case "BottomBound":
			velocity.y = velocity.y * -1;
			break;
		case "Player":
			velocity = CalculateVelocityFromPaddle(collision); // CalculateVelocityFromPaddle(collision);
			lastHitBy = "Player";
			break;
		case "Enemy":
			velocity = CalculateVelocityFromPaddle(collision); // CalculateVelocityFromPaddle(collision);
			lastHitBy = "Enemy";
			break;
		}
		gameObject.GetComponent<Rigidbody2D> ().velocity = this.velocity;
	}

	void OnTriggerEnter2D(Collider2D collider) {
		Debug.Log ("Scored");
		isScored = true;
	}

	Vector2 CalculateVelocityFromPaddle(Collision2D collision) {
		var paddleHalfLength = collision.gameObject.GetComponent<BoxCollider2D> ().bounds.size.y / 2;
		var distanceFromPaddleCenter = (Mathf.Abs(transform.position.y - collision.gameObject.transform.position.y) + 0.1f) / paddleHalfLength;
		var angle = 30 + (60 * distanceFromPaddleCenter);
		return new Vector2 (Mathf.Cos (angle) * speed, Mathf.Sin (angle) * speed);
	}

	public void Launch() {
		System.Random r = new System.Random (System.DateTime.UtcNow.Millisecond);
		var angle = r.Next (20, 45);
		velocity = new Vector2 (speed * Mathf.Cos(angle) * -1, speed * Mathf.Sin(angle));
		gameObject.GetComponent<Rigidbody2D> ().velocity = velocity;
	}

	public void Reset() {
		isScored = false;
		gameObject.GetComponent<Rigidbody2D> ().velocity = Vector2.zero;
		transform.position = Vector2.zero;
	}
}
