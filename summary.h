#ifndef SUMMARY_H
#define SUMMARY_H

#include "slime.h"
#include <iostream>
#include <string>

using namespace std;

/***********************FUNCTION PROTOTYPES***********************/
// Definition: Prints a summary of a given slime based on the slime struct.
// Pre: A variable must be completely defined within the slime struct.
// Post: A cout statement is returned, displaying all of the values.
void printSlime(slime slimePerson);

#endif