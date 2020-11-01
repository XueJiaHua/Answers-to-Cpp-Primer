/*
 *  C++ Primer, Fifth Edition Exercise 1.18
 *  P.S. It is the same as Exercise 1.17.

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 1, 2020
 */

/*
 *  If the input values are all equal, it will print just one line:
 *      (int) occurs (n) times.
 * 
 *  If the input values are different, it will print (n) lines:
 *      (int) occurs 1 times.
 *      (int) occurs 1 times.
 *      ......
 */

#include<iostream>
using namespace std;

int main()
{
	int currVal = 0, val = 0;
	cout << "Enter a list of integers:" << endl;
	if (cin >> currVal)
	{
		int cnt = 1;
		do
		{
			cin >> val;
			if (currVal == val)
			{
				++cnt;
			}
			else
			{
				cout << currVal << " occurs " << cnt << " times." << endl;
				cnt = 1;
				currVal = val;
			}
		} while (cin.get() != '\n');
		cout << currVal << " occurs " << cnt << " times." << endl;
	}
	return 0;
}