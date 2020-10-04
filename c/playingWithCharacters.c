#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch,s[100],sen[100];
    scanf("%c\n", &ch);
    scanf("%[^\n]%*c", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    puts(s);
    puts(sen);
    return 0;
}
