https://www.hackerrank.com/challenges/diagonal-difference/problem

#include<stdio.h>

void main()
{
     int i,j,arr_rows;
     int sum_p=0,sum_s=0, ans;
     scanf("%d",&arr_rows) ;
     int arr[arr_rows][arr_rows] ;
     for(i=0; i<arr_rows; i++)
     {
          for(j=0; i<arr_rows; j++)
          {
              scanf("%d ",&arr[i][j]) ;
          }
          printf("\n") ;
     }
     for(i=0; i<arr_rows; i++)
     {
        for(j=0; j<arr_rows; j++)
        {
          if(i==j)
             sum_p =   sum_p+ *(*(arr+i)+j);
          if((i+j) == arr_rows-1)
             sum_s =  sum_s+ *(*(arr+i)+j);
        }
     }
     ans = abs(sum_s-sum_p) ;
     printf("%d",ans) ;
}
