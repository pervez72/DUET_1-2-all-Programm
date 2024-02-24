#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter the value of starting : ");
    scanf("%d",&a);
    printf("Enter the value of ending :");
    scanf("%d",&b);
    for(i=a; i<=b; i++){
           int count=0;
        for(j=2; j<i; j++){
                if(i%j==0)
                count++;

    }
    if(count==0)
        printf("%d\n",i);

    }
    return 0;
}
