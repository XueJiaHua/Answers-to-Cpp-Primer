/*
 *  C++ Primer, Fifth Edition Exercise 1.13

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 1, 2020
 */

#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum += i;
	}
	cout << "Sum of 1 to 10 inclusive is " << sum << endl;
	return 0;
}