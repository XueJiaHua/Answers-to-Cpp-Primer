/*
 *  C++ Primer, Fifth Edition, Ex 3.15

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 22, 2020
 */

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string temp;
	vector<string> list{};
	while (cin >> temp)
	{
		list.push_back(temp);
	}
	return 0;
}