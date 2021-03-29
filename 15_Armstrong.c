//Author- Sankalp Bajaj
//22/March/2021
//To Find Whether A Number Is An Armstrong Number Or Not


#include <stdio.h>  
  
int main()  
{  
    int num, rem, sum = 0, temp;  
  
    printf("Enter an integer number\n");  
    scanf("%d", &num); // Will Read The Number Entered By User 
  
    temp = num;  
  
    while(num)  
    {  
        rem = num % 10;  
        sum = sum + (rem * rem * rem);  //Formula
        num = num / 10;  
    }  
  
    if(temp == sum)  
    {  
        printf("%d is armstrong number\n", temp);  
    }  
    else  
    {  
        printf("%d is not armstrong number\n", temp);  
    }  
  
    return 0;  
}  
