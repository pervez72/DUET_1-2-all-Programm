#include<stdio.h>
int main()
{
    int i,n,sum=0,avg,count=0;
    printf("Enter the last digit: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(i%2!=0){
            sum=sum+i;
            count++;
        }
    }
    avg=sum/count;
    printf("The summation is: %d\n",sum);
    printf("The avarage value is: %d",avg);
    return 0;
}

