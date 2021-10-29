/*
Baby Sanvi’s mother is preparing her for monthly assessment. To assess Sanvi’s recognition
and counting ability, mother shows a English sentence say “a big black bear sat on a big black
rug” and ask her to identify each letter and to tell the most frequent alphabet. In this case it’s a
with count 6. Automate this process by writing a program in C.
Note: Assume that the sentence will have only lower-case letters and no special characters. 
      Assume no two letters repeating same time
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int freq[100],count=0,i,j,max=0;
	
	//String input
	printf("Enter the string :  ");
	gets(str);
	
	for(i=0 ; i<strlen(str) ; i++)
	{
		freq[i]=-1;
	}
	
	for(i=0 ; i<strlen(str) ; i++)   
	{
		if(str[i] != ' ')
		{
			count=1;
			for(j=i+1 ; j<strlen(str) ; j++)
			{
			
				if(str[i] == str[j])
				{
					count++;
					freq[j] =0;
				}
			
			}
			if(freq[i] != 0)
        	{
            	freq[i] = count;
        	}
		}
		
	}
	
	printf("\nMost frequent alphabet is : ");
    for(i=0; i<strlen(str); i++)
    {
        if(freq[i] > freq[max])
        	max=i;
		
    }
    printf("%c with count %d",str[max],freq[max]);
}

