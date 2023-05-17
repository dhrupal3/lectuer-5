#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter Value A = ");
    scanf("%d",&a);
    printf("Enter Value B = ");
    scanf("%d",&b);
    printf("Enter Value C = ");
    scanf("%d",&c);
    printf("Enter Value D = ");
    scanf("%d",&d);
    printf("Enter Value E = ");
    scanf("%d",&e);

    (a>b) ? (a>c) ? (a>d) ? (a>e) ? printf("A Is Max.") : printf("E Is Max.") : printf("D Is Max."): printf("C Is Max.")
          : (b>c) ? (b>d) ? (b>e) ? printf("B Is Max.") : printf("E Is Max.") : printf("D Is Max."): printf("C Is Max."); 
    return 0;
}