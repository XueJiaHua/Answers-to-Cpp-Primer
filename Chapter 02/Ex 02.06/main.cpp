/*
 *  C++ Primer, Fifth Edition, Ex 2.6

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 4, 2020
 */

/*
 *  In the first definition, "9" and "7" is decimal number.
 *      As a result ,month was assigned to 9 and day was assigned to 7.
 *  In the second definition, "09" and "07" is octal number. 
 *      But "09" is illegal in octal number, and the compiler will rise a error.
 */

void the_first_definition()
{
	int year = 9, month = 7;
}

void the_second_definition()
{
	int year = 09, month = 07;
}