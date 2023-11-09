//
//  polymorphism.cpp
//  p
//
//  Created by Matthew Neary on 11/7/23.
//
//#define _USE_MATH_DEFINES
//
//#include <cmath>
#include <iostream>
#include "polymorphism.hpp"
using namespace std;

class Shape{
public:
    virtual double area(){
        return 0.0;
    };
};

class Circle: public Shape{
public:
    double radius;
    double area() override{
        return pow(this->radius, (double) 2) * 3.1415;
    }
    Circle(double radius) : radius(radius) {};
};

class Rectangle : public Shape{
public:
    int length;
    int width;
    double area() override{
        return this->length * this->width;
    }
    Rectangle(int length, int width) : length(length), width(width) {};
};

class Triangle : public Shape{
public:
    int base;
    int height;
    double area() override{
        return 0.5 * this->base * this->height;
    }
    Triangle(int base, int height) : base(base), height(height) {};
};


int main(){
    Circle myCircle(3.5);
    Rectangle myRectangle(10, 10);
    Triangle myTriangle(5, 5);
    
    cout << myCircle.area() << endl;
    cout << myRectangle.area() << endl;
    cout << myTriangle.area() << endl;
    
    return 0;
}
