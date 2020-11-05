/*
 *  C++ Primer, Fifth Edition, Ex 2.17

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 5, 2020
 */

/*
 *  10 10
 */

#include<iostream>
using namespace std;

int main()
{
	int i, & ri = i;
	i = 5;
	ri = 10;
	cout << i << " " << ri << endl;
	return 0;
}