#include<stdio.h>
#include<math.h>
int primefactors(int x)
{
    int i;
    for(i=2;x>1;i++)
    {
        while(x%i==0)
        {
            printf("%d ",i);
            x=x/i;
        }
    }
}

int main()
{
    int n;
    printf("Enter a positive number:");
    scanf("%d",&n);
    primefactors(n);
    return 0;
}