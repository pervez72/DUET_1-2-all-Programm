#include<stdio.h>
int main()
{
    int f1=0,f2=1,f3,i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%d %d ",f1,f2);
    for(i=3; i<=n; i++){
           f3=f1+f2;
    f1=f2;
    f2=f3;
    printf("%d ",f3);

    }
    return 0;
}
