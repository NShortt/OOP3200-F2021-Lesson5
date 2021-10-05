#include <iomanip>
#include <iostream>
#include <vector>

#include "GameObject.h"

void static BuildGameObjects(std::vector<GameObject*>& pointerGameObjects, const int num = 2)
{
	for (auto count = 0; count < num; ++count)
	{
		int id;
		std::cout << "Enter the game object's ID: ";
		std::cin >> id;
		Vector2D point;
		std::cout << "Enter the game object's position (x, y): ";
		std::cin >> point;
		std::cout << "\n--------------------------------------------------------------" << std::endl;
		std::cout << "You Entered " << id << " for the game object's ID" << std::endl;
		std::cout << "You Entered " << point << " for the game object's position" << std::endl;
		std::cout << "--------------------------------------------------------------\n" << std::endl;
		auto gameObject = new GameObject(id, point);
		pointerGameObjects.push_back(gameObject);
	}
}

static void CompareGameObjects(GameObject* object1, GameObject* object2)
{
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first game object is: " << object1->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second game object is: " << object2->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first game object and second game object is: "
				<< Vector2D::Distance(object1->GetPosition(), object2->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first game object to the second game object is: "
				<< Vector2D::SignedAngle(object1->GetPosition(), object2->GetPosition()) << std::endl;

	std::cout << "First Game Object Details:" << std::endl;
	std::cout << object1->ToString() << std::endl;

	std::cout << "Second Game Object Details:" << std::endl;
	std::cout << object2->ToString() << std::endl;
}

int main()
{
	std::vector<GameObject*> gameObjects;

	int numGameObjects;
	std::cout << "How Many Game Objects do you need?: ";
	std::cin >> numGameObjects;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	BuildGameObjects(gameObjects, numGameObjects);

	int index1;
	std::cout << "What is the First Object index?: ";
	std::cin >> index1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	int index2;
	std::cout << "What is the Second Object index?: ";
	std::cin >> index2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	CompareGameObjects(gameObjects[index1], gameObjects[index2]);

	

}

