/*
 *  C++ Primer, Fifth Edition, Ex 3.5-part2

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 11, 2020
 */

#include<iostream>
#include<string>

using namespace std;

int main()
{
	bool isnotfirst = false;
	string sum, temp;
	while (getline(cin, temp))
	{
		if (isnotfirst)
		{
			sum += " ";
		}
		else
		{
			isnotfirst = true;
		}
		sum += temp;
	}
	cout << sum << endl;
	return 0;
}