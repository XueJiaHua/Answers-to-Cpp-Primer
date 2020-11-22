/*
 *  C++ Primer, Fifth Edition, Ex 3.17

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
	int t = 0;
	for (int i = 0; i < list.size(); i++)
	{
		for (char d : list[i])
		{
			printf("%c", d - 32);
		}
		cout << " ";
		if (++t == 8)
		{
			cout << endl;
			t = 0;
		}
	}
	return 0;
}