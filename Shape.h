#pragma once
#include <wx/colour.h>

struct Point
{
    double x;
    double y;
    Point(double xx, double yy) : x(xx), y(yy) {}
};

class Shape
{
public:
    virtual void Draw() const = 0;
    virtual ~Shape(){}
protected:
    
};

class Triangle : public Shape
{
public:
    void Draw() const;
    Triangle(Point p11, Point p22, Point p33, wxColour lc, wxColour fc);
private:
    Point p1, p2, p3;
    wxColour lineColor;
    wxColour fillColor;
};

class Rectangle : public Shape
{
public:
    void Draw() const;
    Rectangle(Point p11, Point p22, Point p33, Point p44, wxColour lc, wxColour fc);
private:
    Point p1, p2, p3, p4;
    wxColour lineColor;
    wxColour fillColor;
};

class Circle : public Shape
{
public:
    void Draw() const;
    Circle(Point c, double r, wxColour lc, wxColour fc);
private:
    Point center;
    double radius;
    wxColour lineColor;
    wxColour fillColor;
};