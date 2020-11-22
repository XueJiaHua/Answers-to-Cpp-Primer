/*
 *  C++ Primer, Fifth Edition, Ex 3.20-part1

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
	for (int i = 0; i < list.size() - 1; i++)
	{
		cout << list[i] + list[static_cast<__int64>(i) + 1] << endl;
	}
	return 0;
}