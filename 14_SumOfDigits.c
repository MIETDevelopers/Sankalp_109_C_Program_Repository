//Author- Sankalp Bajaj
//29/March/2021
//Sum of Digits of a Number Using While Loop


#include<stdio.h>
int main()
{
	int Number, Reminder , Sum=0;

	printf("Please Enter any number\n");
	scanf("%d", &Number);// This willl read the number entered by user

	while(Number > 0)//Using while Loop
	{
	    //This is the formula to calculate sum of digits
	    Reminder = Number % 10;
	    Sum = Sum+Reminder;
	    Number = Number/ 10;
	}

    printf("Sum of the digits of given number = %d\n", Sum);

    return 0;
}

	
