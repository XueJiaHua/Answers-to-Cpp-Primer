/*
 *  C++ Primer, Fifth Edition, Ex 3.13

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 18, 2020
 */

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v1;
	//0
	vector<int> v2(10);
	//10  0
	vector<int> v3(10, 42);
	//10  42
	vector<int> v4{ 10 };
	//1   42
	vector<int> v5{ 10, 42 };
	//2   one is 10, the other is 42
	vector<string> v6{ 10 };
	//10
	vector<string> v7{ 10, "hi" };
	//10  "hi"
}