/*
 *  C++ Primer, Fifth Edition, Ex 3.18

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 22, 2020
 */

/*
 *  Illegal. It could be fixed as follow.
 */

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> ivec(1,0);
	ivec[0] = 42;
	return 0;
}