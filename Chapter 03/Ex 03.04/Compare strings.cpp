/*
 *  C++ Primer, Fifth Edition, Ex 3.4-part1

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 11, 2020
 */

#include<iostream>
#include<string>

using namespace std;

int main()
{
	cout << "Enter two words seperated with newlines and return the larger one." << endl;
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	if (str1 == str2)
	{
		cout << "They are equal." << endl;
	}
	else if (str1 > str2)
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