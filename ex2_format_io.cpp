/*
 * This is a copy of my code for the lab exercise in UOfR for CS110 class
 * Student Name: Nisarg
 * Assignment Number: CS 110 Lab 3 exercise 2
 * Program Name: format_io.cpp
 * Last Modified: July 2nd, 2022
 * 
 * REFER TO SAMPLE CODING TEMPLATE OR YOUR PROFESSOR'S REQUIREMENTS
 * FOR MORE.
 *
 * Add short comments in the code to explain each change you make.
 *************************************************/

#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

int main()
{
  string product;
  float price;

  cout << "Product name: ";
  //Intially it was given us this: cin >> product;
  //It will only take the first word and it will terminate from the space
  //But if we tried this instead
  getline(cin,product);
//Using getline will terminate when it encounter the enter.

  //Using getline the pogram will take the input until it reaches it termination point.
  
  cout << "Price: $";
  cin >> price;

  //We put setprecision(n), to get n number of decimal values, to get the correct output
  cout << product << ": $" << setprecision(2) << price * 0.7 << " (with 30% discount)" << endl;

  return 0;
}


