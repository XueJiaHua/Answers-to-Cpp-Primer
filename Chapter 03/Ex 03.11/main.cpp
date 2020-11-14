/*
 *  C++ Primer, Fifth Edition, Ex 3.11

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 14, 2020
 */

/*
 *  Legal.
 *  c is a const char&.
 */

#include<iostream>
#include<string>

using namespace std;

int main()
{
	const string s = "Keep out!";
	for (auto &c : s)
	{
		cout << c << endl;
	}
	return 0;
}