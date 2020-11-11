/*
 *  C++ Primer, Fifth Edition, Ex 3.4-part2

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 11, 2020
 */

#include<iostream>
#include<string>

using namespace std;

int main()
{
	cout << "Enter two words separated with newlines and return the longer one." << endl;
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	if (str1.length() == str2.length())
	{
		cout << "They hold the same length." << endl;
	}
	else if (str1.length() > str2.length())
	{
		cout << "The larger one is:" << endl;
		cout << str1 << endl;
	}
	else
	{
		cout << "The larger one is:" << endl;
		cout << str2 << endl;
	}
	return 0;
}