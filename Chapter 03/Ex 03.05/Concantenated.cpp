/*
 *  C++ Primer, Fifth Edition, Ex 3.5-part1

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 11, 2020
 */

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string sum, temp;
	while (getline(cin, temp))
	{
		sum += temp;
	}
	cout << sum << endl;
	return 0;
}