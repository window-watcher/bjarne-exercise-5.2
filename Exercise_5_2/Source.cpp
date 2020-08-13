/*
	Project:Exercise 5.2
	By: Adrian Rodriguez
	Date:8/12/20
	Objective: Find, list, and fix each error within ctok() and main().
	Version 1.0

	Change log
	version 1.0 :

*/
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

double ctok(double c)//converts Celsius to Kelvin
{
	/*
	Errors:
	 variable k was an int this would have resulted in a narrowing error and didn't match this function return type
	 return int instead of return k
	 used literal 273.15 instead of constant
	 missing ; in return k;
	*/
	const double CELSIUS_TO_KELVIN = 273.15;
	double k = c + CELSIUS_TO_KELVIN;
	
	return k; 
}


	int main()
	{
		/*
		Errors:
		used "c" instead of variable c in ctok()
		used d instead of  variable c in cin >> c
		wrote Cout instead of cout
		missing return 0;
		*/
		double c = 0; // declare input variable
		cin >> c;	  // retrieve temperature to input variable
		double k = ctok(c);	//convert temperature
		cout << k << endl;		//print out temperature

		keep_window_open();//wait for a character to be enter
		return 0;
	}


