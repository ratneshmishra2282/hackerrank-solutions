//https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

#include<stdio.h>
#include<stdlib.h>
#define l 3
int main()
{
    int q,x,y,z,a,b;
    scanf("%d",&q);
    int que[q][l],i;
   
    for(i=0;i<q;i++)
    { 
        scanf("%d%d%d",&que[i][0],&que[i][1],&que[i][2]);
    }
    for(i=0;i<q;i++)
    { 
        x=que[i][0];
        y=que[i][1];
        z=que[i][2];
       a=abs((z-x));
       b=abs((z-y));
       if(a>b)
         printf("Cat B\n");
      else if(b>a)
         printf("Cat A\n");
      else if(a==b)
         printf("Mouse C\n");
   
    }

    return 0;
}
