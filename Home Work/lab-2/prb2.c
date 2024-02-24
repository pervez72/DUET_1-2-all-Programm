#include<stdio.h>
int main()
{
    int n,pre_n=15;
    char ch='y';
    while(ch=='y' || ch=='Y'){
        printf("Enter an integer:");
        scanf("%d",&n);
        if(n>pre_n)
            printf("It ig greater than %d\n",pre_n);
        else if(n<pre_n)
            printf("It is less than %d\n",pre_n);
        else
            printf("It is Equal to %d",pre_n);

        pre_n=n;

    }
     printf("Do you want to continue(y or n)");
        scanf("%c",&ch);

    return 0;
}
