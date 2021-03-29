//Author- Sankalp Bajaj
//21/March/2021
//To Find Whether A Number Is Prime Or Not

#include<stdio.h>  
  
int main()  
{  
    int num, count = 2, flag = 1, inum;  
  
    printf("Enter a number\n");  
    scanf("%d", &num);  // This Will Read The Number Entered By User
  
    inum = num / 2;  
  
    while(count <= inum)  
    {  
        if(num%count == 0)  
        {  
            flag = 0;  
            break;  
        }  
        count++;  
    }  
  
    if(flag) printf("%d is prime number\n", num);  
    else     printf("%d is not prime number\n", num);  
  
    return 0;  
}  
