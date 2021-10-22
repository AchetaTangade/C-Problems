/*
Sanvi is a very naughty kid. She can recognize numbers from 0 to 9. Her mother has to submit
a report to her team leader in next one hour. To engage the naughty Sanvi, she gives her 8
balloons which has numbered printed on it. Sanvi is asked to put the balloons in a box, in such
a way that the box shouldn’t contain duplicate balloons with respect to numbers printed on it.
Help baby Sanvi to finish the task soon and start her mischiefs. 
 input : 6 5 4 9 6 2 9 4
 */
 
#include<stdio.h>
int main()
{
	int a[20],n,i,j,b[20];
	printf("Enter the number of elements in array : ");
	scanf("%d",&n);
	printf("Enter the elements of array :");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
		b[i]=-1;
	}	
	printf("Numbers are: \n");
	for(i=0 ; i<n ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
			if(a[i]==a[j])
			{
				b[j]=0;
				
			}
		}
	}
	for(i=0 ; i<n ; i++)
	{
		if(b[i] != 0)
		{
			printf("%d\n",a[i]);
		}
	}
} 

