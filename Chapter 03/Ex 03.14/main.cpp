/*
 *  C++ Primer, Fifth Edition, Ex 3.14

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 22, 2020
 */

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int temp = 0;
	vector<int> list{};
	while (cin >> temp)
	{
		list.push_back(temp);
	}
	return 0;
}