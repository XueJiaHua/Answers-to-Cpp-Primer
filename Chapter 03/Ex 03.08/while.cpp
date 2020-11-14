/*
 *  C++ Primer, Fifth Edition, Ex 3.8-part1

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 14, 2020
 */

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	decltype(str.size()) i = 0;
	while (i < str.size())
	{
		str[i] = 'X';
		i++;
	}
	cout << str;
	return 0;
}