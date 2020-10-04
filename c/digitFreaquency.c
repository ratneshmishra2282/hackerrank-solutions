#https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

#include<stdio.h>
#include<string.h>
int main() {

char s[1000];
int c=0,i,j;

scanf("%s", s);
for(j=0;j<10;j++)
{
    for (i=0;s[i]!='\0';i++)
    {
        if(s[i]-48==j)
        c++;
    }
    printf("%d " ,c);
    c=0;


}

return 0;
}
