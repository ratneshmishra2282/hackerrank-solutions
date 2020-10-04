#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,k;
    int i,j;
    int c,d,e;
    int max1=0,max2=0,max3=0;
    scanf("%d %d",&n,&k);
for(i=1;i<n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        c=i&j;
        d=i|j;
        e=i^j;
        if(c>max1&&c<k)
        {
            max1=c;
        }
        if(d>max2&&d<k)
        {
            max2=d;
        }
        if(e>max3&&e<k)
        {
            max3=e;
        }
    }
}
printf("%d\n",max1);
printf("%d\n",max2);
printf("%d",max3);
    return 0;
}
