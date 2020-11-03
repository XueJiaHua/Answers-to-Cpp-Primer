/*
 *  C++ Primer, Fifth Edition Exercise 1.23

 *  Version:2.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 3, 2020
 */

#ifndef _ITEM_H_
#define _ITEM_H_

#include<iostream>
#include<string>
using namespace std;

class ITEM
{
private:
	string m_ISBN;     //the ISBN of this kind of books in this record
	int m_salesvolume; //the sales volume of this kind of books in this record
	float m_price;     //the price of this kind of books in this record
public:
	//get()
	string getISBN()
	{
		return this->m_ISBN;
	}
	int getSALESVOLUME()
	{
		return this->m_salesvolume;
	}
	float getPRICE()
	{
		return this->m_price;
	}
	friend ostream& operator<<(ostream& os, const ITEM& c);
	friend istream& operator>>(istream& is, ITEM& c);
};

ostream& operator<<(ostream& out, const ITEM& c)
{
	out << c.m_ISBN << " " << c.m_salesvolume << " " << c.m_price / c.m_salesvolume << endl;
	return out;
}

istream& operator>>(istream& in, ITEM& c)
{
	in >> c.m_ISBN >> c.m_salesvolume >> c.m_price;
	return in;
}

#endif
