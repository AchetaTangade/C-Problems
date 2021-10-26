/*
Consider a string “R N S Institute of Technology”. People are fond of
abbreviations. So the output expected for above string is RNSIT. Write a code to implement
the same. Make your code generic so that it can abbreviate any given string say “British
Broadcasting Corporation” to BBC.
Note: Do not use Built-in libraries.
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	
	printf("Enter the string : ");
	gets(str);
	
	
	printf("Abbreviation of above string is : ");
	printf("%c",str[0]);
	
	for(int i=0 ; str[i] != '\0' ; i++)
	{
		if(str[i] == ' ')
		{
			printf("%c",str[i+1]);
		}
	}
	
	
}
