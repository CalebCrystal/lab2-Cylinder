//Caleb Crystal
//C++
//lab 2 - Volume / Surface Area of a Cylinder

#include<iostream>
#include"Cylinder.h"
#include"iomanip"

int main()
{

	Cylinder b;
	b.setHeight(3.0); // sets Height 
	b.setRadius(3.0); // sets Radius

	 std::cout << "Height of Cylinder: " << std::setprecision(6) << b.getHeight() << std::endl << "Radius of Cylinder: " << b.getRadius() << std::endl;
	 // outputs the height and the radius of the cylinder to the screen 

	 std::cout << "Surface Area of the Cylinder: " << std::setprecision(6) << b.areaOfCylinder() <<  std::endl;
	 // calls the area of a Cylinder function to calculate the surface area with the given height and set radius

	 std::cout << "Volume of the Cylinder: " << std::setprecision(6) << b.VolOfCylinder() << std::endl;
	 // calls the Voulme of Cylinder funtion this calculates the volume of the cylinder in the class Cylinder 
	 // file and returns the value to this screen

	 return 0;  // returns 0 at the end of the function 

}
