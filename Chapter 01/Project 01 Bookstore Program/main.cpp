/*
 *  C++ Primer, Fifth Edition, Project 1, Bookstore Program

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 3, 2020
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
	cout << "FUNC:Enter as many as transactions you want and finish with 'e n d'." << endl;
	cout << "Receive the sum of the transactions that hold the same ISBN in the fixed format." << endl;
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
	cout << "ISBN |" << " SalesVolume |" << " Sales |" << " AveragePrice " << endl;
	print(head);
	return 0;
}