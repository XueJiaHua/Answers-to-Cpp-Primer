/*
 *  C++ Primer, Fifth Edition Exercise 1.5
	
 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Oct 31, 2020
 */

#include<iostream>
using namespace std;

int main()
{
	cout << "Enter ";
	cout << "two ";
	cout << "numbers:" << endl;

	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;

	cout << "The ";
	cout << "sun ";
	cout << "of ";
	cout << v1;
	cout << " and ";
	cout << v2;
	cout << " is ";
	cout << v1 + v2;

	return 0;
}