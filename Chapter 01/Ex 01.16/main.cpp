/*
 *  C++ Primer, Fifth Edition Exercise 1.16

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 1, 2020
 */

#include<iostream>
using namespace std;

int main()
{
	int val = 0, sum = 0;
	cout << "Enter a set of integers:" << endl;
	do
	{
		cin >> val;
		sum += val;
	} while (cin.get() != '\n');
	cout << "Sum of the integers you listed is " << sum << endl;
}