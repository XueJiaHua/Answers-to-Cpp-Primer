/*
 *  C++ Primer, Fifth Edition Exercise 1.12

 *  Version:1.0
 *  Editor :XueJiaHua, GitHub
 *  Date   :Nov 1, 2020
 */

/*
 *  Step1.Create i, which is a integer, and initilize it to -100.
 *  Step2.Test whether i is less than or equal to 100. If the test succeeds, execute the for body;
 *        If the test fails, exit the loop and continue execution with the first statement following the for body.
 *  Step3.Add i to sum, and store the result in sum.
 *  Step4.Increment i.
 *  Step5.Repeat the test in Step2, continuing with the remaining steps as long as the condition is TRUE.
 */

#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; i++)
	{
		sum += i;
	}
	cout << "Sun of -100 to 100 inclusive is " << sum << endl;
	return 0;
}