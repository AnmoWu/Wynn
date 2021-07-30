#pragma once
#include<iostream>
using namespace std;

class Point
{
public:
	double x, y;

	Point(int x, int y);
	friend ostream operator<< (ostream&, Point&);
	
};

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

ostream operator<<(ostream& out, Point& p)
{
	out << "(" << p.x << "," << p.y << ")" << endl;
}