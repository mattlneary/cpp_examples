//
//  factorial.cpp
//  p
//
//  Created by Matthew Neary on 11/7/23.
//

#include "factorial.hpp"
#include <iostream>

double loop_factorial(int number){
    double return_value = number;
    
    while (number != 1){
        return_value =  return_value * (number - 1);
        number--;
    }
    return return_value;
}

double recursive_factorial(int number){
    if (number == 1){
        return 1;
    }
    return number * recursive_factorial(number  - 1);
}


int main(){
    using namespace std; {
        int number;
        cout << "Gimme a fuckin number: " << endl;
        cin >> number;
        
        double loop = loop_factorial(number);
        double recursive = recursive_factorial(number);
        
        cout << "Loop said " << loop << endl;
        cout << "Recursion said " << recursive << endl;
        
        return 0;
    }
}
