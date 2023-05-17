#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Value A = ");
    scanf("%d",&a);
    printf("Enter Value B = ");
    scanf("%d",&b);
    printf("Enter Value C = ");
    scanf("%d",&c);
    
    (a>b) ? (a>c) ? printf("A Is Maximum."): printf("C Is Maximum")
          : (b>c) ? printf("B Is Maximum."): printf("C Is Maximum");
    return 0;
}