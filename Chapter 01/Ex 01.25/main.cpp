/*
 *  C++ Primer, Fifth Edition, Ex 1.25

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 3, 2020
 */

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item total;//variable to hold data for the next transaction
	//read the first transaction and ensure that there are data to process
	if (cin >> total)
	{
		Sales_item trans;//variable to hold the runing sum;
		//read and process the remaining transactions
		while (cin >> trans)
		{
			if (total.isbn() == trans.isbn())
			{
				//if we're still processing the same book
				total += trans;//update the runing sum
			}
			else
			{
				cout << total << endl;//print results for the previous book
				total = trans;//total now refers to the next book
			}
		}
		cout << total << endl;//print the last book
	}
	else
	{
		//no input! warn the user
		cerr << "No data!?" << endl;
		return -1;
	}
	return 0;
}