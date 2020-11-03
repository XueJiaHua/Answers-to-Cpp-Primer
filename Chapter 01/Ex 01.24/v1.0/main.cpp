/*
 *  C++ Primer, Fifth Edition Exercise 1.24
 *  P.S. It is the same as Exercise 1.23

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 2, 2020
 */

/*
 * 待功力深厚，再更新v2.0
 * disadvantage:只能正确计量连续输入相同的数据，且输出会打断输入。
 */

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	int count = 1;
	Sales_item curr, item;
	cin >> item;
	while (cin >> curr)
	{
		if (item.isbn() == curr.isbn())
		{
			count += 1;
		}
		else
		{
			cout << "ISBN:" << item.isbn() << " occurs " << count << " tiems." << endl;
			item = curr;
			count = 1;
		}
	}
}