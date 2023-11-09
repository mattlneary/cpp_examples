//
//  test.cpp
//  p
//
//  Created by Matthew Neary on 11/7/23.
//

#include "test.hpp"
#include <iostream>

int main(){
    using namespace std; {
        int age;
        cout << "Enter your age: ";
        cin >> age;
        
        string name;
        cout << "Enter your name: ";
        cin >> name;
        
        
        cout << name << " is " << age << " years old.";
        return 0;
    }
}
