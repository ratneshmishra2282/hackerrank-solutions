// a program for finding the smallest number amoung the four numbers input by the user

#include <stdio.h>
int main()
{

    int a, b, c, d, x = 0;
    printf("enter no. 1  \n:  ");
    scanf("%d", &a);
    printf("enter no. 2 \n:  ");
    scanf("%d", &b);
    printf("enter no. 3 \n:  ");
    scanf("%d", &c);
    printf("enter no. 4  \n:  ");
    scanf("%d", &d);

    x = a < b ? a : b;
    x = x < c ? x : c;
    x = x < d ? x : d;
    printf("the smallest no. is %d \n", x);

    return 0;
}