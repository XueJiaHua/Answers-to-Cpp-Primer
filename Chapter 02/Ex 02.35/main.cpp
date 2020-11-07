/*
 *  C++ Primer, Fifth Edition, Ex 2.35
 *  P.S. It is the same as Ex 2.33

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 7, 2020
 */

/*
 *  j :int
 *  k :const int&
 *  p :const int*
 *  j2:const int
 *  k2:const int&
 */

#include<iostream>
using namespace std;

int main()
{
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	return 0;
}