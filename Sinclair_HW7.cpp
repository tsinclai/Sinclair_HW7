/*
All programming assignments for the remainder of this course must begin with
a variation of the following four lines:

Program Name: Minimum and Maximum
Purpose: To determine and return the lowest and highest values of
  two numbers.
Author: Tabitha Sinclair
Date Last Modified: 01-31-19
*/

#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <cmath>

int main () {
  double input1; // First user input
  double input2; // Second user input
  double minimumValue; // Lower inputted value
  double maximumValue; // Higher inputted value

  cout << "Welcome to Minimum and Maximum!" << endl;
  cout << "Enter the first number: " << endl;
  cin >> input1;
  cout << "Enter the second number: " << endl;
  cin >> input2;

  minimumValue = fmin(input1, input2);
  maximumValue = fmax(input1, input2);

 cout << "The number " << minimumValue << " is lower than " << maximumValue << endl;
  return 0;

}
