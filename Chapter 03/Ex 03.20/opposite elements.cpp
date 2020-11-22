/*
 *  C++ Primer, Fifth Edition, Ex 3.20-part2

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
	for (int i = 0; i < (list.size() + 1) / 2; i++)
	{
		cout << list[i] + list[list.size() - 1 - i] << endl;
	}
	return 0;
}