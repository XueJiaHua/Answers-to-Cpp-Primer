/*
 *  C++ Primer, Fifth Edition, Ex 3.16

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 22, 2020
 */

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int temp;
	vector<int> list{};
	while (cin >> temp)
	{
		list.push_back(temp);
	}
	cout << "Size:" << list.size() << endl;
	cout << "Contents:" << endl;
	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << endl;
	}
	return 0;
}