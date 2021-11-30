/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dave Edouard
 */

#include <iostream>
using namespace std;

int main(){
    int i;

    cout << "Enter number: ";
    cin >> i;

    if(i%2 == 0){
        cout << "The value " << i << " is an even number.";
    }
    else{
        cout << "The value " << i << " is an odd number.";
    }
    return 0;
}