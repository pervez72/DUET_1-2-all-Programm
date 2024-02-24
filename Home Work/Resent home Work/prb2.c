#include<stdio.h>
int main()
{
    int i,count=0,j,a,b;
    printf("Enter first and last value: ");
    scanf("%d%d",&a,&b);
    for(i=a; i<=b; i++){
        count=0;
        j=2;
        while(j<i){
            if(i%j==0)
                count++;
            j++;
        }
        if(count==0)
            printf("%d ",i);
    }
    return 0;
}
