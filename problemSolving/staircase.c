// Problem link : https://www.hackerrank.com/challenges/staircase/problem

#include<stdio.h>
int main()
{
       int n , j , i ;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            if(j>n-i-2)
            {
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }


      return 0;
}
