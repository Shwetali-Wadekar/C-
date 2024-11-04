
/**
 * @file Coordinate.cpp
 * @brief Implementation file for the Coordinate class, providing methods to
 * handle 3D coordinate representations in Cartesian, cylindrical, and polar formats.
 */
#include "Coordinate.h"
#include <math.h>

#define M_PI 180

using namespace std;

/**
 * @brief Constructor for the Coordinate class, initializing Cartesian coordinates.
 *
 * @param x Initial x-coordinate value.
 * @param y Initial y-coordinate value.
 * @param z Initial z-coordinate value.
 *
 * @details Prints the memory address of the constructed object and the initialized attribute values.
 */
Coordinate::Coordinate(float x, float y, float z):x(x),y(y),z(z)
{
	//b) Implement the constructor in the file Coordinate.cpp. Print the address of the object
	// using the this Pointer as well as all attribute values
	std::cout << "Constructor generates object at " << this << std::endl;
	std::cout << "Value= (" << x << ", " << y << ", " << z << ")" << std::endl;

}

/**
 * @brief Retrieves the current Cartesian coordinates of the object.
 *
 * @param[out] x Reference to store the x-coordinate.
 * @param[out] y Reference to store the y-coordinate.
 * @param[out] z Reference to store the z-coordinate.
 *
 * @details The function assigns the current x, y, z values to the references provided by the caller.
 */
void Coordinate::getCartesian(float &x, float &y, float &z)
{
	/*
	 * If you don't use references in getCartesian(), the function will create copies of the x, y, and z values and return those copies.
	 * Any modifications made to these copies within the function will not affect the original values in the calling scope.
	 * This is useful when you only want to retrieve the values without modifying them.
	 * Not using references in getCartesian() prevents accidental modifications to the original values.
	 */
 x = this->x;
 y = this->y;
 z = this->z;
}

/**
 * @brief Sets new Cartesian coordinates for the object.
 *
 * @param x New x-coordinate value.
 * @param y New y-coordinate value.
 * @param z New z-coordinate value.
 *
 * @details Updates the object's x, y, and z attributes with the provided values.
 */
void Coordinate::setCartesian(float x, float y, float z)
{
	/*Passing arguments by reference in setCartesian() allows you to modify the original values of x, y, and z within the function.
	 * This means that any changes made to these parameters will be reflected in the calling function.
	 * This is often desirable when you want to modify the values of variables in the calling scope.
	 *
	 * Using references in setCartesian() allows you to modify the original values in the calling scope.
	 */
	this->x=x;
	this->y=y;
	this->z=z;
}

/**
 * @brief Converts the Cartesian coordinates to cylindrical coordinates.
 *
 * @param[out] r Radius in cylindrical coordinates.
 * @param[out] phi Angle in radians in the xy-plane.
 * @param[out] h Height, equivalent to the z-coordinate.
 *
 * @details If the radius is zero, the angle phi is set to zero as it is undefined.
 * The method applies conditions to determine the correct quadrant for phi.
 */
void Coordinate::getCylinder(float &r, float &phi, float &h)
{
	 r = sqrt(x * x + y * y);
	        h = z;

	        if (r == 0) {
	            std::cerr << "Warning: Undefined angle in cylindrical coordinates (r = 0). Setting phi to 0.\n";
	            phi = 0; // Undefined angle, set to 0
	        } else if (x > 0) {
	            phi = atan(y / x);
	        } else if (x < 0 && y >= 0) {
	            phi = atan(y / x) + M_PI;
	        } else if (x < 0 && y < 0) {
	            phi = atan(y / x) - M_PI;
	        } else if (x == 0 && y > 0) {
	            phi = M_PI / 2;
	        } else if (x == 0 && y < 0) {
	            phi = -M_PI / 2;
	        } else {
	            phi = 0; // Undefined angle case
	        }
}


/**
 * @brief Converts the Cartesian coordinates to polar coordinates.
 *
 * @param[out] r Radius from the origin.
 * @param[out] phi Azimuthal angle in the xy-plane.
 * @param[out] theta Polar angle from the z-axis.
 *
 * @details If the radius is zero, the angles are set to zero as they are undefined.
 * Otherwise, theta and phi are computed based on trigonometric conversions.
 */
void Coordinate::getPolar(float &r, float &phi, float &theta)
{
	r = sqrt(x * x + y * y + z * z);

	        if (r == 0) {
	            std::cerr << "Warning: Undefined polar coordinates (r = 0). Setting theta and phi to 0.\n";
	            theta = 0;
	            phi = 0; // Undefined values
	        } else {
	            theta = atan2(sqrt(x * x + y * y), z);
	            phi = atan2(y, x);
	        }
}



/**
 * @brief Adds the Cartesian coordinates of another Coordinate object to this object.
 *
 * @param c The Coordinate object whose coordinates are to be added.
 *
 * @details Performs element-wise addition on the x, y, and z attributes of the object.
 */
void Coordinate::add(const Coordinate &c)
{
	/*
	 * The add() function modifies the current Coordinate object by adding the values of the passed Coordinate object to its own attributes.
	 * This is different from setCartesian(), which completely replaces the current values with the new ones.
     * In essence, add() performs an in-place addition operation, while setCartesian() performs a complete assignment.
     *
     * The add() function modifies the current Coordinate object in-place, while setCartesian() replaces the values entirely.
	 */
	x += c.x;
	y += c.x;
	z += c.x;
}


/**
 * @brief Prints the coordinate representation of the object in the specified style.
 *
 * @param style Coordinate style (CARTESIAN, CYLINDER, or POLAR).
 *
 * @details Based on the chosen style, calls the appropriate conversion function and
 * displays the coordinates in the specified format.
 */
void Coordinate::print(t_coordinate style)
{
	 switch (style) {
	 float r, phi, theta, h;
	         case CARTESIAN:
	        	 //setCartesian(x, y, z);
	        	 std::cout << "Cartesian  representation = (x, y, z) = ";
	             std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
	             break;
	         case CYLINDER:
	             getCylinder(r, phi, h);
	             std::cout << "Cylinder  representation = (r, phi, z) = ";
	             std::cout << "(" << r << ", " << phi << ", " << h << ")" << std::endl;
	             break;
	         case POLAR:
	             getPolar(r, phi, theta);
	             std::cout << "Cylinder  representation = (r, phi, theta) = ";
	             std::cout << "(" << r << ", " << phi << ", " << theta << ")" << std::endl;
	             break;
	         default:
	             std::cout << "Invalid coordinate style." << std::endl;
	             break;
	     }
}

Coordinate::~Coordinate()
{
	//Implement the destructor. Print the address of the destroyed object
	// TODO Auto-generated destructor stub
	std::cout << " Address of the destroyed object: " << this << std::endl;
}

