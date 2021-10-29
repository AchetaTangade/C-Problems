/*
Consider the strings Str1= AACD and Str2= ACDA, Str2 is rotation of Str1, so as ABCD and CDAB.
Considering Str3= ABCD and Str4= ACBD, Str4 is not rotated version of Str3. Given two strings
Str1 and Str2, write a program that determines whether Str2 is a rotation of Str1
*/

#include <stdio.h>
#include<string.h>
void main()
{
   char a[100],b[100];
   int i,j,count=0 ;
   void *flag;
   printf("enter the 1st string\n");
   scanf("%s",a);
   printf("enter the 2nd string\n");
   scanf("%s",b);
    
   if(strlen(a)==strlen(b))
   {
       strcat(a,a);
       
       flag=strstr(a,b);
       if(flag!=NULL)
       {
           printf("rotation of each other\n");
           
       }
       else
       {
           printf("not rotation\n");
       }
    
    
   }
   else
   {
       printf("not a rotation of each other");
   }
  
}
