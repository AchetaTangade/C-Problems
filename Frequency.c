/*Question 2
Fequency. After seeing the efficiency of Chitti, Dr. Vaseegaran assigns another job to him. The
new responsibility is to count the frequency of numbers present in a group of numbers. The
answer should be tabulated. Consider the following example. The expected output for the given
set if numbers is
{2 6 10 14 18 10 3 7 11 15 19 3 7 10 14}
2’s : 1
6’s : 1
10’s : 3
14’s : 2
18’s : 1
and so on … 
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
	int i,j,count;
	int freq[20];
	for(i=0; i<n; i++)
    {
       /* Initially initialize frequencies to -1 */
        freq[i] = -1;
    }
	for(i=0 ; i<n ; i++)
	{
		count=1;
		for(j=i+1 ; j<n ; j++)
		{
			/* If duplicate element is found */
            if(a[i]==a[j])
            {
                count++;

                /* Make sure not to count frequency of same element again */
                freq[j] = 0;
            }
		}
		
		/* If frequency of current element is not counted */
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
	}
	/*
     * Print frequency of each element
     */
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d's : %d times\n", a[i], freq[i]);
        }
    }

	
}
int main()
{
	int a[20],n,i;
	printf("Enter the number of elements in array : ");
	scanf("%d",&n);
	accept(a,n);
	check(a,n);
	
}
