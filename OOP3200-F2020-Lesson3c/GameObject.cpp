#include "GameObject.h"

GameObject::GameObject(): m_id(0), m_position(Vector2D())
{
}

GameObject::GameObject(const int id, const float x, const float y)
{
	SetID(id);
	SetPosition(x, y);
}

GameObject::GameObject(const int id, const Vector2D& position)
{
	SetID(id);
	SetPosition(position);
}

GameObject::~GameObject()
= default;

GameObject::GameObject(const GameObject& otherObject)
{
	SetID(otherObject.m_id);
	SetPosition(otherObject.m_position);
}

GameObject& GameObject::operator=(const GameObject& otherObject)
{
	SetID(otherObject.m_id);
	SetPosition(otherObject.m_position);
	return (*this);
}

Vector2D GameObject::GetPosition() const
{
	return m_position;
}

int GameObject::GetID() const
{
	return m_id;
}

void GameObject::SetID(const int id)
{
	m_id = id;
}

void GameObject::SetPosition(const float x, const float y)
{
	m_position.Set(x, y);
}

void GameObject::SetPosition(const Vector2D& newPosition)
{
	m_position = newPosition;
}

std::string GameObject::ToString() const
{
	std::string outputString;
	outputString += "ID       : " + std::to_string(GetID()) + "\n";
	outputString += "Position : " + GetPosition().ToString() + "\n";
	return outputString;
}
