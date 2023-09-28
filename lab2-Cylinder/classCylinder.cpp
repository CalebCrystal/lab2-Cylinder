#include"Cylinder.h"
#include<iostream>

Cylinder::Cylinder()  //Constructor
{
	radius = 0;
	height = 0;
}

Cylinder::~Cylinder()  //destructor
{

}

void Cylinder::setHeight(float height_)  //allows the height of the cylinder to be set in Main.cpp
{
	height = height_;
}
void Cylinder::setRadius(float radius_)  //allows the Radius of the cylinder to be set in Main.cpp
{
	radius = radius_;
}


float Cylinder::getHeight() //returning height when called by the function
{
	return height;
}
float Cylinder::getRadius() //returning radius when called by the function 
{
	return radius;
}

float Cylinder::areaOfCylinder()  //store the formula for the area of a cylinder and returns the formula when called 
{
	return float(2 * 3.14 * getRadius() * (getRadius() + getHeight()));
}
float Cylinder::VolOfCylinder() //stores the formula for the Volume of a cylinder and returns the formula when called 
{
	return float(3.14 * getRadius() * getRadius() * getHeight() );
}

