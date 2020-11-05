/*
 *  C++ Primer, Fifth Edition, Ex 2.14

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 5, 2020
 */

/*
 *  If the question means run the program in the global scope, the premiler will rise a error.
 *  If it means run it in a main() function, it will print "100 45".
 *  The "i" in the result is the one in the outer scope, 
 *      while the "i" in the for loop which were added to "sum" is the one in the inner scope.
 */

#include<iostream>
using namespace std;

int main()
{
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
		sum += i;
	cout << i << " " << sum << endl;
	return 0;
}