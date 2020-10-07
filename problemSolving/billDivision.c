//https://www.hackerrank.com/challenges/bon-appetit/problem

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{  
    //n is items ordered
    //k is 0-based index of the item that Anna did not eat.
    //bc is money that Brian charged Anna for her share of the bill.
    //ba is actual share of Anna.
    int i,n,k,bc,ba;
    int sum =0;
    
    scanf("%d",&n);
    scanf("%d",&k);
    int p[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        sum=sum+p[i];
    }
    scanf("%d",&bc);
    ba=(sum-p[k])/2;
    if(ba==bc)
    {
        printf("Bon Appetit");
    }
    else
    printf("%d",bc-ba);
 
}