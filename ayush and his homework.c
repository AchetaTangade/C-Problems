/*
Ayush is studying in engineering 2nd year, he has a subject related to logical reasoning. Ayush has done some mischevious activity and his professor Dr. Reetu Raj has given him a homework, as a punishment, which Ayush thinks is difficult for him to complete. But Ayush is a good friend of you and he knows the fact that you are a top-coder. So he is asking for your help to complete his homework.
Dr. Reetu Raj has given Ayush an array of integers and has asked him to calculate the XOR of the given ranges. For example, Let a = [3,2,4,5,1,1,5,3]. For this array, Professor can ask Ayush to calculate the XOR of the range [1, 8] which is 6.
Professor will ask  such queries.
Wikipedia link to XOR

Input Format

The first line of input has two integers n and q: length of the array and number of queries.

The second line has n integers x1 ,x2,…,xn: the array values.

Constraints

1<=n, q <=2.105
1 <= xi <= 109
1 <= a <=b <= n

Output Format

Output q lines with answer to each query.
Suppose the i-th query is  . Then, you should print XOR of  in i-th line.

Sample Input0

8 4
3 2 4 5 1 1 5 3
2 4
5 6
1 8
3 3
Sample Output0

3 0 6 4
Explanation for first query ==> 2 xor 4 xor 5 =3

Sample Input1

18 8
7 8 4 2 9 7 3 6 7 7 2 7 6 2 1 3 5 6 
9 16
13 16
1 4
15 17
17 18
17 18
3 6
2 15
Sample Output1

3 6 9 7 3 3 8 5

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int n,arr[100],q,a,b,o[100],xr;
    scanf("%d%d",&n,&q);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<q ; i++)
    {
        scanf("%d%d",&a,&b);
        xr=0;
        while(a!=b+1)
        {
            xr=xr^arr[a-1];
            a++;
        }
        o[i]=xr;
    }
    for(int i=0 ; i<q ; i++)
    {
        printf("%d ",o[i]);
    }    
}

  
