#include<stdio.h>
int main()

{
    int i,j,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            sum=sum+j;
        }
    }
    printf("Summation is : %d",sum);
    return 0;

}
