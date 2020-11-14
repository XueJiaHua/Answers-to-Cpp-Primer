/*
 *  C++ Primer, Fifth Edition, Ex 3.6

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 14, 2020
 */

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str = "";
	cin >> str;
	for (auto &i : str)
	{
		i = 'X';
	}
	cout << str;
	return 0;
}