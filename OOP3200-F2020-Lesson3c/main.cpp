#include <iomanip>
#include <iostream>

#include "GameObject.h"

int main()
{
	
	int id1;
	std::cout << "Enter the first game object ID: ";
	std::cin >> id1;
	Vector2D point1;
    std::cout << "Enter the first point (x, y): ";
	std::cin >> point1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point1 << " for the first game object" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	GameObject gameObject1(id1, point1);


	
	int id2;
	std::cout << "Enter the second game object ID: ";
	std::cin >> id2;
	Vector2D point2;
	std::cout << "Enter the second point (x, y): ";
	std::cin >> point2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point2 << " for the second game object" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	GameObject gameObject2(id2, point2);

	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first game object is: " << gameObject1.GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second game object is: " << gameObject2.GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first game object and second game object is: " << Vector2D::Distance(gameObject1.GetPosition(), gameObject2.GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first game object to the second game object is: " << Vector2D::SignedAngle(gameObject1.GetPosition(), gameObject2.GetPosition()) << std::endl;

	std::cout << "First Game Object Details:" << std::endl;
	std::cout << gameObject1.ToString() << std::endl;
	std::cout << "Second Game Object Details:" << std::endl;
	std::cout << gameObject2.ToString() << std::endl;

}

