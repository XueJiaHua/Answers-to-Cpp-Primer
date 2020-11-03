/*
 *  C++ Primer, Fifth Edition Exercise 1.23

 *  Version:2.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 2, 2020
 */

#ifndef _FUNC_H_
#define _FUNC_H_

#include"item.h"
#include"bookkind.h"
#include<assert.h>

/*
 *  input :the head of linklist BOOKKIND, ISBN
 *  output:a pointer of a BOOKKIND which holds the same ISBN as the input ISBN
 *  func  :return a pointer of a BOOKKIND which holds the same ISBN as the input ISBN, but return NULL if it doesnot exist
 */
BOOKKIND* find(BOOKKIND* head, string ISBN)
{
	BOOKKIND* code = head;
	while ((code = code->getNEXT()) != NULL)
	{
		if (code->getISBN() == ISBN)
			return code;
	}
	return NULL;
}

//!!a += b doesnot means a = a + b hear.
void operator += (BOOKKIND* bookkind, ITEM item)
{
	bookkind->addSALESVOLUME(item.getSALESVOLUME());
	bookkind->addSALES(item.getSALESVOLUME() * item.getPRICE());
}

void count_print(BOOKKIND* head)
{
	BOOKKIND* code = head;
	while ((code = code->getNEXT()) != NULL)
	{
		code->count_print();
	}
}

#endif
