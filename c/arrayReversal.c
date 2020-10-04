#https://www.hackerrank.com/challenges/reverse-array-c/problem

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],b[1000],i,n;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[n-1-i]=a[i];
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
