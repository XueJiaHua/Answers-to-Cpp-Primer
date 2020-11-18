/*
 *  C++ Primer, Fifth Edition, Ex 3.12

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 18, 2020
 */

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<vector<int>> ivec;
	//Legal.
	//Create a vector whose elements are vectors that holds ints.
	vector<string> svrc = ivec;
	//Illegal.
	//ivec is a vector which holds vector<int>, while svrc is a vector holds string.
	vector<string> svec(10, "null");
	//Legal.
	//Create a vector named "svec" which has 10 elements that has been initialed with "null".
}