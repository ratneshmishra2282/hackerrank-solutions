//https://www.hackerrank.com/challenges/grading/problem

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*p,i,x;
    int diff;
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)>=38)
        {
            x=*(p+i)/5;
            x=x+1;
            diff=x*5-*(p+i);
            if(diff<3)
              *(p+i)=5*x;
            else
             continue;
        }
        else
        continue;
    }
    for(i=0;i<n;i++)
    printf("%d\n",*(p+i));
}