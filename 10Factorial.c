//Author- Sankalp Bajaj
//18/March/2020
//To Find Factorial Of a Number Using For Loop


#include<stdio.h> //Header File Input Output
#include<math.h>
int main()
{
	int num, count, factorial = 1;

	printf("Enter a number to find its Factorial\n");
	scanf("%d", &num);

	for(count = 1; count <= num; count++)
	{
	   factorial = factorial * count;
	}
    //num=5, factorial=120
    //num=6, factorial=720
    //num=7, factorial=5040
	printf("Factorial of %d is %d\n", num, factorial);

	return 0;
}