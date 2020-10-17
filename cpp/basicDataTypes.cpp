//https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf",&a,&b,&c,&f,&d);
    printf("%d\n%ld\n%c\n%0.3f\n%0.9lf",a,b,c,f,d);
    return 0;
}
