﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{

	public CharacterController2D controller;

	public float runSpeed = 40f;

	float horizontalMove = 0f;
	bool jump = false;
	

	// Update is called once per frame
	void Update()
	{

		horizontalMove = Input.GetAxisRaw("Horizontal") * runSpeed;

		if (Input.GetButtonDown("Jump"))
		{
			jump = true;
		}

		
	}

	void FixedUpdate()
	{
		// Move our character
		controller.Move(horizontalMove+70 * Time.fixedDeltaTime, false, jump);
		jump = false;
	}
	public void BtnJump()
    {
		jump = true;
	}
}