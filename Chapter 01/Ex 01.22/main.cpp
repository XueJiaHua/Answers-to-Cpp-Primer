/*
 *  C++ Primer, Fifth Edition Exercise 1.22

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 2, 2020
 */

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item item, item_sum;
	cout << "Func:Enter at least one book sales transaction that hold the same ISBN." << endl;
	cout << "You should finish your input with 'e n d', and the sum of these records will be printed." << endl;
	cin >> item_sum;
	while (cin >> item)
	{
		item_sum += item;
	}
	cout << "Sun of these transactions is:" << endl;
	cout << item_sum << endl;
	return 0;
}