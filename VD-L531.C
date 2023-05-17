#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter Value A = ");
    scanf("%d",&a);
    printf("Enter Value B = ");
    scanf("%d",&b);
    (a>b) ? printf("A Is Maximum."): printf("B Is Maximum.");
    return 0;
}