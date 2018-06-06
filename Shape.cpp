#include "Shape.h"
#include <iostream>


Triangle::Triangle(Point p11, Point p22, Point p33, wxColour lc, wxColour fc) : p1(p11), p2(p22), p3(p33), lineColor(lc), fillColor(fc)
{

}

Rectangle::Rectangle(Point p11, Point p22, Point p33, Point p44, wxColour lc, wxColour fc) : p1(p11), p2(p22), p3(p33), p4(p44), lineColor(lc), fillColor(fc)
{

}

Circle::Circle(Point c, double r, wxColour lc, wxColour fc) : center(c), radius(r), lineColor(lc), fillColor(fc)
{

}


void Triangle::Draw() const
{
    
}


void Rectangle::Draw() const
{

}


void Circle::Draw() const
{

}