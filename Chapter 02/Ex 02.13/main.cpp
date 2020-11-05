/*
 *  C++ Primer, Fifth Edition, Ex 2.13

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 5, 2020
 */

/*
 *  j = 100
 *  The initialization of j prefer the local object named i than the global one.
 */

#include<iostream>
using namespace std;

int i = 42;
int main()
{
	int i = 100;
	int j = i;
	cout << j << endl;
	return 0;
}