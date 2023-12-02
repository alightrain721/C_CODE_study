#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) 
    { 
        int i = a / b;
        int j = a % b;
        printf("%d %d\n", i,j);
    }
    return 0;
}