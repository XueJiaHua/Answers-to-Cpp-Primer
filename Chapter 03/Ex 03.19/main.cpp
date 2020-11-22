/*
 *  C++ Primer, Fifth Edition, Ex 3.19

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 22, 2020
 */

/*
 *  As all the elements are the same, way1 is preferd.
 */

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int>way1(10, 42);
	vector<int>way2{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
	vector<int>way3{};
	for (int i = 0; i < 10; i++)
	{
		way3.push_back(3);
	}
}