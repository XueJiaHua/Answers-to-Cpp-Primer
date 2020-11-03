/*
 *  C++ Primer, Fifth Edition Exercise 1.23
 
 *  Version:2.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 3, 2020
 *  Update :1.Rebuild and simplify "Sales_item.h", and named it "item.h";
 *          2.Build a new class named "bookkind", which is stored in the file "bookkind.h";
 *          3.MOdify the program accounding to the new class "item" and "bookkind".
 * 
 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 2, 2020
 */

#include<iostream>
#include"item.h"
#include"func.h"
#include"bookkind.h"
using namespace std;

int main()
{
	BOOKKIND* head, * code, * end;//component of the linklist BOOKKIND
	BOOKKIND* finded;             //the pointer of a BOOKKIND which holds the same ISBN of the current item
	ITEM item;                    //current item is a kind of sata struct, which holds the information in the last transaction inputed 
	cout << "FUNC:Enter as many as transactions you want and finish with 'e n d'. Receive how many times you inputed for each ISBN." << endl;
	head = new BOOKKIND;
	end = head;
	while (cin >> item)
	{
		finded = find(head, item.getISBN());
		if (finded != NULL)
		{
			finded += item;
			finded->addCOUNT(1);
		}
		else
		{
			code = new BOOKKIND;
			code->setISBN(item.getISBN());
			code->setSALESVOLUME(item.getSALESVOLUME());
			code->setSALSE(item.getSALESVOLUME() * item.getPRICE());
			code->addCOUNT(1);
			end->setNEXT(code);
			end = code;
		}
	}
	count_print(head);
	return 0;
}
