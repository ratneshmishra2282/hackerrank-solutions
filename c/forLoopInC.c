//https://www.hackerrank.com/challenges/for-loop-in-c/problem

#include <stdio.h>

int main()  {
    char *dig[] =
        {" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    scanf("%d%d", &a, &b);

    for ( ;a <= b;a++)
        puts((a < 10) ? dig[a] : ((a % 2) ? "odd" : "even"));

    return 0;
}
