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