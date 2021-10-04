#include <iomanip>
#include <iostream>

#include "Vector2D.h"

int main()
{
	Vector2D point1;
    std::cout << "Enter the first point (x, y): ";
	std::cin >> point1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point1 << " for the first point" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	Vector2D point2;
	std::cout << "Enter the second point (x, y): ";
	std::cin >> point2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point2 << " for the second point" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first point is: " << point1.GetMagnitude() << std::endl;
	std::cout << "Magnitude of second point is: " << point2.GetMagnitude() << std::endl;
	std::cout << "Distance between first point and second point is: " << Vector2D::Distance(point1, point2) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first vector to the second vector is: " << Vector2D::SignedAngle(point1, point2) << std::endl;
	
}

