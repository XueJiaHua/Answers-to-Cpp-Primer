/*
 *  C++ Primer, Fifth Edition, Ex 3.7
 *  P.S. It is the same as Ex 3.6

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 14, 2020
 */

/*
 *  As the element of string is char, auto holds the meaning of char as well.
 *  As the result, it is the same as Ex 3.7 in my mind.
 */

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str = "";
	cin >> str;
	for (char &i : str)
	{
		i = 'X';
	}
	cout << str;
	return 0;
}