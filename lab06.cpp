// Programmer: Will Weidler
// ID: wawq97
// Date: 2/28/22
// File: hw4.cpp
// Assignment: HW4
// Purpose: This program outputs the summary of 3 different slimes

#include "summary.h"
#include "slime.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "First Slime:" << endl;
    slime slimeOne = {"Slime", "Oore", 12.63, 23, true};
    printSlime(slimeOne);
    cout << endl;

    cout << "Second Slime:" << endl;
    slime slimeTwo = {"Goo", "Laurie", 4.2, 62, false};
    printSlime(slimeTwo);
    cout << endl;

    cout << "Third Slime:" << endl;
    slime slimeThree = {"Stanley", "Koobleck", 812.6, 70, true};
    printSlime(slimeThree);   
    cout << endl;

    return 0;
}