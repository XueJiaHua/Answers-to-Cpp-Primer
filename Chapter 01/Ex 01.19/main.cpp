/*
 *  C++ Primer, Fifth Edition Exercise 1.19
 *  P.S. It is the same as Exercise 1.11.

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 1, 2020
 */

#include<iostream>
using namespace std;

int main()
{
	cout << "Endrt two integers:" << endl;
	int v1 = 0, v2 = 0;
	cin >> v1 >> v2;
	if (v1 > v2)
	{
		int temp;//temporal variable
		temp = v1;
		v1 = v2;
		v2 = temp;
	}
	cout << "The numbers in the range of specified are:" << endl;
	while (v1 <= v2)
	{
		cout << v1 << endl;
		++v1;
	}
	return 0;
}