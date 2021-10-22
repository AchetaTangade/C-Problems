/*
Question 2
Given an array of integers, and another integer K. Write a program to find indexes of two
elements in an array which sum is equal to K.
This is called two sum problem.
Test case 1
input
[5, 4, 7, 3, 9, 2]
Sum=13
output
Indices are found at 1 and 4 (4 and 1)
Test case 2
input
[1, 2, 3, 4, 5]
Sum=9
output
Indices are found at 3 and 4 (4 and 3)
Test case 3
input
[1, 2, 3, 4, 5]
Sum = 10
output
No indices found
*/

#include<stdio.h>
int main()
{
	int arr[20],n,i,j,k;
	printf("Enter the number of elements in array : ");
	scanf("%d",&n);
	printf("Enter the elements of array :");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
		
	}	
	printf("Enter the value for k \n");
	scanf("%d",&k);
	for(i=0 ; i<n ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
			if(arr[i] + arr[j] == k)
			{
				printf("Indices are found at %d and %d\n",i,j);
				return 0;
			}
		}
	}
	printf("No indices found\n");
} 
