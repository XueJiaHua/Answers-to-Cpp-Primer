/*
 *  C++ Primer, Fifth Edition Exercise 1.8

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 1, 2020
 */

/*
 * Line 1, 2, 4 is legal, while line 3 is illegal.
 */

#include<iostream>
using namespace std;

int main()
{
	cout << "/*";                //legal
	cout << "*/";                //legal
	//cout << /* "*/" */;        //illegal
	cout << /* "*/" */ "/*" */;  //legal
	return 0;
}