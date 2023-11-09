//
//  pointers.cpp
//  p
//
//  Created by Matthew Neary on 11/7/23.
//

#include "pointers.hpp"
#include <iostream>


int main(){
    int* x = new int(10);
    int* y = new int(20);
    int* z;
    
    z = x;
    x = y;
    y = z;
    
    std::cout << *x;
    std::cout << *y;
    
    free(x);
    free(y);
    
}
