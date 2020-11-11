/*
 *  C++ Primer, Fifth Edition, Ex 3.2-part1

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 11, 2020
 */

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	cout << "You can finish the program with enterint 'Ctrl + z'" << endl;
	while (getline(cin, str))
	{
		cout << str << endl;
	}
	return 0;
}