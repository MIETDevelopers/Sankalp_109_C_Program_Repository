//Author- Sankalp Bajaj
//20/March/2021
//Fibonacci Series Using For Loop


#include<stdio.h> //Header File Input Output 
  
int main()  
{  
    int n1 = 0, n2 = 1, n3, count, num;  
  
    printf("Enter the number of terms to be printed\n");  
    scanf("%d", &num); // this will read the number entered by user 
  
    printf("\n%d\n%d\n", n1, n2);  
  
    for(count = 3; count <= num; count++) // For loop function for the reference to the formula of the Series 
    {  
        n3 = n1 + n2;  //Formula to print the series
        printf("%d\n", n3);  
  
        n1 = n2;  
        n2 = n3;  
    }  
  
    return 0;  
}  
