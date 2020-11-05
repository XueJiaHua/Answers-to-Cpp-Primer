/*
 *  C++ Primer, Fifth Edition, Ex 2.20

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 5, 2020
 */

/*
 *  Func:Assign i * i to i.
 */

#include<iostream>
using namespace std;

int main()
{
	int i = 42;
	int* p1 = &i;
	*p1 = *p1 * *p1;
	cout << *p1 << endl;
	return 0;
}