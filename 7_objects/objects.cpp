//
//  objects.cpp
//  p
//
//  Created by Matthew Neary on 11/7/23.
//

#include "objects.hpp"
#include <iostream>
using namespace std;

class Car {
public:
    string make;
    string model;
    int year;
    Car(string make, string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
    }
};


int main(){
    string make;
    string model;
    int year;
    
    cout << "enter make: " << endl;
    cin >> make;
    cout << "enter model: " << endl;
    cin >> model;
    cout << "enter year: " << endl;
    cin >> year;
    
    Car car(make, model, year);
    cout << car.make << car.model << car.year;
}
