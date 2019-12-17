#pragma once
#include<iostream>
#include "Point3D.h"
#include "Vector3D.h"
class Point3D;
class Vector3D
{
	//friend Point3D;    розкоментувавши цю строку, ми зробимо клас Point3D
	// дружнім класу Vector3D.

	
double m_x, m_y, m_z;
public:
	Vector3D(double x, double y, double z);
	
	friend void Point3D::moveByVector(const Vector3D &v);
	void print();
	
	
};
