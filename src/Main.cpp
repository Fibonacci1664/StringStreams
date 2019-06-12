/*
 * Main.cpp
 *
 *  Created on: 12 Jun 2019
 *      Author: Dave
 */

#include<iostream>
#include<sstream> // String stream, allows concatenation of strings and numbers.

using namespace std;

int main()
{
	int age = 32;
	string name = "Bob";

	stringstream ss;

	ss << "Name is: ";
	ss << name;
	ss << ", Age is: ";
	ss << age;

	string info = ss.str();

	cout << info << endl;


	return 0;
}


