https://www.hackerrank.com/challenges/quicksort1/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/* Head ends here */
void partition(int ar_size, int *  ar)
{
    int left[ar_size];
    int right[ar_size];
    int pivot=ar[0];
    int j,k=0;
    for(int i=1;i<ar_size;i++)
    {
       if(ar[i]<pivot)
       {
           left[j]=ar[i];
           j++;
       }
       else
       {
           right[k]=ar[i];
           k++;
       }
    }
    //j=0;k=0;
    for(int i=0;i<j;i++)
    {
           ar[i]=left[i];
    }
    ar[j]=pivot;
    for(int i=0;i<k;i++)
    {
           ar[i+j+1]=right[i];
    }
    for(int i=1;i<=ar_size;i++)
    {
           printf("%d ",ar[i]);
    }
}

/* Tail starts here */
int main() {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

partition(_ar_size, _ar);
   
   return 0;
}
