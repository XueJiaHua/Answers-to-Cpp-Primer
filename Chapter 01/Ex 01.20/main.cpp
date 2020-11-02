/*
 *  C++ Primer, Fifth Edition Exercise 1.20

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 2, 2020
 */

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item item;
	cout << "Func:Enter a book sales transaction and print its standard output." << endl;
	cout << "You can do this any times you want, but to end it with 'e n d'." << endl << endl;
	cout << "Input :";
	while (cin >> item)
	{
		cout << "Output:" << item << endl << endl;
		cout << "Input :";
	}
	return 0;
}