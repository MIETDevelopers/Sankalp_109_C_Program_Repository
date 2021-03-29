//Author- Sankalp Bajaj
//21/March/2021
//Maximun of N numbers Using For Loop

#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num,n,large=0; // It will set the number of values to be entered by user based on their choice
	printf("How many numbers:");
	scanf("%d",&n);

	for(i=0; i<n; i++) // It will scan the numbers entered by user upto the limit that has been set
	{
		printf("\nEnter number %d: ",i+1);
		scanf("%d",&num);
		if(num>large)
		large=num;
	}

	printf("\nThe largest number is %d",large); // It will give the largest number as the output

	getch();

	return 0;	
}
