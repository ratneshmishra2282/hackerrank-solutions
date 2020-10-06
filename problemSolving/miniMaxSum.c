// https://www.hackerrank.com/challenges/mini-max-sum/problem

#include<stdio.h>
#include<stdlib.h>
int main()
{
  long long int sum=0,x,y,z,w,p,q,r,s;
  long long int a,b,c,d,e;
  scanf("%lld",&a);
  scanf("%lld",&b);
  scanf("%lld",&c);
  scanf("%lld",&d);
  scanf("%lld",&e);
// To find Smallest integer
  x=a<b? a:b;
  y=x<c? x:c;
  z=y<d? y:d;
  w=z<e? z:e;

// To find greatest integer
  p=a>b? a:b;
  q=p>c? p:c;
  r=q>d? q:d;
  s=r>e? r:e;
  sum=a+b+c+d+e;
  
  printf("%lld %lld",sum-s, sum-w);

  return 0;
}
