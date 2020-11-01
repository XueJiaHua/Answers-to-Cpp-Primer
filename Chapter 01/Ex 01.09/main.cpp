/*
 *  C++ Primer, Fifth Edition Exercise 1.9

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 1, 2020
 */

#include<iostream>
using namespace std;

int main()
{
	int val = 50;
	int sum = 0;
	while (val <= 100)
	{
		sum += val;
		++val;
	}
	cout << "The sum of 50 to 100 inclusive is " << sum << endl;
	return 0;
}