//
//  conditionals.cpp
//  p
//
//  Created by Matthew Neary on 11/7/23.
//

#include "conditionals.hpp"
#include <iostream>

int main(){
    using namespace std; {
        int number;
        cout << "Enter a number: " << endl;
        cin >> number;
        
        if (number % 2 == 0){
            cout << "That shits even bruh" << endl;
        }
        else {
            cout <<  "That shits odd dawg" << endl;
        }
        return 0;
    }
}
