/*
No twins pls !!!: Mr. Chitti, a robot is assigned a job of reporting to his boss Dr. Vaseegaran
about the existence of twins in a group. Chitti’s job is just to report whether the group is distinct
or not. Even if one duplicate is present then the group is not unique. Help Mr. Chitti to report.
Input: an array of integers
output: Array distinct / Array not distinct
Example: Consider the following array. The array is not distinct as 10 is duplicated. 
	{2,6,10,14,18,10,3,7}
*/

#include<stdio.h>
void accept(int a[],int n)
{
	int i;
	printf("Enter the elements of array :");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
}
void check(int a[],int n)
{
	int i,j;
	for(i=0 ; i<n ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
			if(a[i]==a[j])
			{
				printf("Array is not distinct.");
				return;
			}
		}
	}
	printf("Array is distinct.");
}
int main()
{
	int a[20],n;
	printf("Enter the number of elements in array : ");
	scanf("%d",&n);
	accept(a,n);
	check(a,n);
}
