#pragma once
#include<iostream>
#include "Point3D.h"
#include "Vector3D.h"
class Vector3D;
class Point3D
{
	double m_x, m_y, m_z;
public:
	Point3D(double x , double y , double z );
	
	void print();
    void moveByVector(const Vector3D &v);
};

