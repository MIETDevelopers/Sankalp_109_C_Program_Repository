// Author - Sankalp Bajaj
// To check whether a number is evevn or odd
// 18/March/2021



#include<stdio.h> // Header File Name Input Output
int main(){
    int number; // Declaration of number integer variable
    printf("Please enter a number to be checked");
    scanf("d,&number"); // Read the number from user

    if(number%2==0){
         printf("Number is even");
      } else {
         printf("Number is odd");
      }
}