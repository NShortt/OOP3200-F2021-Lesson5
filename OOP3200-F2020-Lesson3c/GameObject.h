/*
 * OOP 3200 - ICE3
 *
 * File Name: GameObject.h
 *
 * Student Name: Nicholas Shortt
 * Student ID: 100630003
 *
 * Date: Oct 5, 2021
 *
 */
#pragma once
#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__
#include "Vector2D.h"

class GameObject
{
public:
	// Constructors
	GameObject();
	GameObject(int id, float x, float y);
	GameObject(int id, const Vector2D& position);

	// Rule of Three
	~GameObject(); // Destructor
	GameObject(const GameObject& otherObject); // Copy Constructor
	GameObject& operator=(const GameObject& otherObject); // Assignment Operator

	// Accessor
	Vector2D GetPosition() const;
	int GetID() const;
	
	// Mutators
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& newPosition);
	void SetID(int id);

	// Utility Functions
	std::string ToString() const;


private:
	int m_id;
	Vector2D m_position;
};
#endif/* defined __GAME_OBJECT__ */

