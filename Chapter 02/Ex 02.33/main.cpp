/*
 *  C++ Primer, Fifth Edition, Ex 2.33

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 7, 2020
 */

/*
 *  The assignation of a, b and c is legal.
 *  The assignation of d arises an error:
 *      error: a value of type "int" cannot be assigned to an entity of type "int*"
 *  The assignation of e arises an error:
 *      error: a value of type "int" cannot be assigned to an entity of type "const int*"
 *  The assignation of g arises an error:
 *      error: expression must be a modifiable lvalue.
 */

#include<iostream>
using namespace std;

int main()
{
	int i = 0, &r = i;
	const int ci = i, &cr = ci;

	auto a = r;  //a is an int
	auto b = ci; //b is an int
	auto c = cr; //c is an int
	auto d = &i; //c is an int*
	auto e = &ci;//e is a const int*
	auto &g = ci;//g is a const int&

	a = 42;
	b = 42;
	c = 42;
	d = 42;
	e = 42;
	g = 42;

	return 0;
}