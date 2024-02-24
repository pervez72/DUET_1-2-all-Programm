#include<stdio.h>
int main()
{
    int a,x;
    printf("Enter a number:");
    scanf("%d",&a);
    x=(a>0? a:(-1)*a);
    printf("%d",x);
    return 0;
}
