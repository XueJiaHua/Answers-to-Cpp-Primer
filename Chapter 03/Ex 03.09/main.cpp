/*
 *  C++ Primer, Fifth Edition, Ex 3.9

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 14, 2020
 */

/*
 *  The program will print '\0', while cannot be seen.
 *  It is valid, because s was initialized with a '\0' in the position 0.
 */

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cout << s[0] << endl;
	return 0;
}