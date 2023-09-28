#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder 
{
public:

	Cylinder();  // anounces the Constructor
	~Cylinder(); // anounces Desturctor 

	void setHeight(float height_); // anounces that set height will be set once due to void and will float height_
	void setRadius(float radius_); // anounces that set radius will be set once due to void and will float radius_

	float getHeight(); // retrives the set height and can be called more than once 
	float getRadius(); // retrives the set Radius and can be used more than once 

	float areaOfCylinder(); //announces the new function of areaOfCylinder and allows decimal values stored in the function
	float VolOfCylinder();  //announces the new function of VolOfCylinder and allows there to be decimal values stored in the function

private:
	float height; //does not allow the height to be changed by the user 
	float radius; //does not allow the radius to be changed by the user 

};

#endif