#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n;		/*we define a variable that gets its value from the user*/
	cout << "how many numbers do you want to be shown?" << endl; 	/* for e.g , if user enters 4, the program will show first 4 numbers of fibo*/
	cin >> n;		/*we get the value from user*/
	int a = 1, b = 1;		/*first two numbers of fibo*/
	int c;		/*we define this variable to contain the amount of summations*/
	cout << a << endl;
	cout << b << endl;
	int i = 2;		/*define a variable as a counter to count the quantity of shown numbers*/
	
	while (i<n)		/*define conditional structure of while to process the fibonacci numbers. it works till counter reaches user wanted amount*/ 
	{
		c = a + b;		/*c is the variable that becomes the next fibonacci number as the a & b sum up*/
		cout << c << endl;
		a = b;		/*a gets the value of b*/
		b = c;		/*b gets the value of c*/
		i++;
	}
	
	getch();

    return 0;
}

