#include<stdio.h>
#include<iostream>


/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ivan Pavlov
 */



//	chapter 3, ex 8
//Write a program to test an integer value to determine if it is odd or even. 
//As always, make sure your output is clear and
//complete. In other words, don’t just output yes or no.



using namespace std;
int main(){
	int userValue;
	int remainder;
	cout << "Please enter any number (followed by 'enter'):\n";
	cin >> userValue;
	
	remainder = userValue%2;
	if(remainder == 1){
		cout << "The Number Provided is Odd\n";
		}
	else(cout << "The Number Provided is Even\n");
	
	return 0;
}
