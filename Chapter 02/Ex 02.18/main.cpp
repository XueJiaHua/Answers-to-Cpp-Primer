/*
 *  C++ Primer, Fifth Edition, Ex 2.18

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 5, 2020
 */

#include<iostream>
using namespace std;

int main()
{
	int v1 = 0, v2 = 0;
	int* pv = &v1;
	pv = &v2;  //change the value of the pointer
	*pv = 1;   //change the value to which the pointer points
	return 0;
}