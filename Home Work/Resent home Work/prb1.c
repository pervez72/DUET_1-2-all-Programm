#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("(");
        for(j=1; j<=i; j++){
                if(i==j)
            printf("%d)",j);
        else
            printf("%d+",j);
        }
        printf("+");
    }
    printf("........");
}
