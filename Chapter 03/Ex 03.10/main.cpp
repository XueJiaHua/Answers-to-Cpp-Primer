/*
 *  C++ Primer, Fifth Edition, Ex 3.10

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
	decltype(str.size()) t = 0;
	cin >> str;
	for (auto c : str)
	{
		if (!ispunct(c))
		{
			str[t++] = c;
		}
	}
	str[t] = 0;
	cout << str << endl;
	return 0;
}