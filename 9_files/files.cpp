//
//  files.cpp
//  p
//
//  Created by Matthew Neary on 11/7/23.
//

#include "files.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
    ifstream file;
    file.open("file1.txt", ios::in);
    char* input = new char(10);
    file.read(input, 10);
    cout << input;
    
    return 0;
}
