/*
 *  C++ Primer, Fifth Edition, Ex 2.7

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 4, 2020
 */

/*
 *  (1) "Who goes with F\145rgus?\012"
 *      =>type :char
 *      =>value:Who goes with Fergus?
 *       
 *  (2) 3.14e1L
 *      =>type :long double
 *      =>value:31.4
 *  (3) 1024.f //"1024f" is illegal
 *      =>type :float
 *      =>value:1024
 *  (4) 3.14L
 *      =>type :long double
 *      =>value:3.14
 */

#include<iostream>
using namespace std;

int main()
{
	cout << "Who goes with F\145rgus?\012" << endl;
	cout << 3.14e1L << endl;
	cout << 1024.f << endl;
	cout << 3.14L << endl;
}