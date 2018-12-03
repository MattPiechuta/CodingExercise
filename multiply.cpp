// Name: Matthew Piechuta
// Coding Exercise.
// Description: Take a string that contains numbers, multiply them together,
//              and print the result.


#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


using std::cout; using std::cin;
using std::endl; using std::string;


// Function that returns the product of a string of numbers.
int Multiply(string);


int main(){


  // Get input from user.
  cout << "Enter a string [eg: '1,2,3'..]: ";
  string numberString;
  getline(cin, numberString);


  // Get the product of the string contents.
  int result = Multiply(numberString);


  // Print the product/result of the multiply function.
  cout << "The product of the string is: " << result << endl;


  return 0;
}


int Multiply(string numberString){
  if(numberString.empty()){ // Checks for an empty string.
    return 0;
  }

  // Reads each character in the string, casts it to an integer type,
  // then gets the equivilant ascii integer value. Once the integer value is calculated,
  // it multiplies that by the result variable, resulting in the product of a string of numbers.
  int result = 1;
  for(char ch : numberString){
    if(isdigit(ch)){
      result *= int(ch) - 48;
    }
  }

  return result;
}
