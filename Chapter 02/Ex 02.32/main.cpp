/*
 *  C++ Primer, Fifth Edition, Ex 2.32

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 7, 2020
 */

/*
 *  Illegal.
 *  The initilaizer "null" is rejected.
 *  error: a value of type "int" cannot be usd to initialize an entity of type "int*".
 */

#include<iostream>
using namespace std;

int main()
{
	int null = 0, *p = null;
	return 0;
}