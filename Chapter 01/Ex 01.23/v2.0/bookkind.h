/*
 *  C++ Primer, Fifth Edition Exercise 1.23

 *  Version:2.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 3, 2020
 */

#ifndef _BOOKKIND_H_
#define _BOOKKIND_H_

#include<iostream>
#include<string>
using namespace std;

class BOOKKIND
{
private:
	string m_ISBN;     //the ISBN of this kind of books
	int m_salesvolume; //the sales volume of this kind of book s
	float m_sales;     //the saleroom of this kind of books
	int m_count;       //the quantity of sales transaction records of this kind of books
	BOOKKIND* m_next;    //the position of the next kind of kooks
public:
	BOOKKIND(string ISBN = "NULL", int salesvolume = 0, float sales = 0.0, int count = 0, BOOKKIND* next = NULL)
	{
		this->m_ISBN = ISBN;
		this->m_salesvolume = salesvolume;
		this->m_sales = sales;
		this->m_count = 0;
		this->m_next = NULL;
	}
	//get()
	string getISBN()
	{
		return this->m_ISBN;
	}
	int getCOUNT()
	{
		return this->m_count;
	}
	BOOKKIND* getNEXT()
	{
		return this->m_next;
	}
	//set()
	void setISBN(string ISBN)
	{
		this->m_ISBN = ISBN;
	}
	void setSALESVOLUME(int salesvolume)
	{
		this->m_salesvolume = salesvolume;
	}
	void setSALSE(float sales)
	{
		this->m_sales = sales;
	}
	void setNEXT(BOOKKIND* next)
	{
		this->m_next = next;
	}
	//other functions
	void addSALESVOLUME(int delta)
	{
		this->m_salesvolume += delta;
	}
	void addSALES(float delta)
	{
		this->m_sales += delta;
	}
	void addCOUNT(int delta = 1)
	{
		this->m_count += delta;
	}
	void print()
	{
		cout << m_ISBN << endl;
	}
	void count_print()
	{
		cout << "ISBN:" << m_ISBN << " occurs " << m_count << " times." << endl;
	}
};

#endif