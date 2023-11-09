//
//  arrays.cpp
//  p
//
//  Created by Matthew Neary on 11/7/23.
//

#include "arrays.hpp"
#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int n;
    
    cout << "enter number of items" << endl;
    cin >> n;
    
    int *arr = new int(n);
    
    while (i < n){
        cout << "enter a number" << endl;
        cin >> arr[i];
        i++;
    }
    
    int sum = 0;
    for (int j = 0; j < n; j++){
        sum += arr[j];
    }
    double average = sum / (double)n;
    cout << "The average is: " << average;
    return 0;
}
