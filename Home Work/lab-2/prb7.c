#include<stdio.h>
int main()
{
    int i,nth,n,sum=0,summ=0;
    printf("Enter the value of nth: ");
    scanf("%d",&nth);
    n=nth;
    while(n>=1){
        sum=sum+(n+1)*(n+2);
        n--;
    }
    for(i=1; i<=nth; i++){
        summ=summ+(i+1)*(i+2);
    }
    printf("Summation is: %d\n",sum);
    printf("Summation is (for loop): %d",summ);
    return 0;
}
