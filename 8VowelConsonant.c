//Author- Sankalp Bajaj
//18/March/2021
//To Find Whether an Alphabet is Vowel or Consonant

#include<stdio.h> //Header File Input Output
int main()
{
	char ch;

	printf("Enter a character\n");
	scanf("%c", &ch); //It will scan the Alphabet entered by user

	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || // All the Vowels Declared
	   ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
	   printf("%c is vowel\n", ch); //Will print the result if entered ch is Vowel
	}
	else
	{
	   printf("%c is consonant\n", ch); //Will print the result if entered ch is consonant
	}

	return 0;
}	
