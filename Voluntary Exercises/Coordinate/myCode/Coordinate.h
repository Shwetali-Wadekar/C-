

#ifndef COORDINATE_H_
#define COORDINATE_H_
#include <iostream>

class Coordinate
{
private:
	float x;
	float y;
	float z;

	void getPolar(float &r, float &phi, float &theta);
	void getCylinder(float &r, float &phi, float &h);
public:
	enum t_coordinate{
		 CARTESIAN,
		 CYLINDER,
		 POLAR
	};

	Coordinate(float x=0, float y=0, float z=0);
	void getCartesian(float &x, float &y, float &z);
	void setCartesian(float x, float y, float z);
	void add(const Coordinate& c);
	void print(t_coordinate style);

	virtual ~Coordinate();
};

#endif /* COORDINATE_H_ */
