/*
 *  C++ Primer, Fifth Edition Exercise 1.21

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 2, 2020
 */

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item item1, item2;
	cout << "Enter two book sales transactions that hold the same ISBN:" << endl;
	cin >> item1 >> item2;
	cout << "Sum of these two transactions is:" << endl;
	cout << item1 + item2 << endl;
	return 0;
}