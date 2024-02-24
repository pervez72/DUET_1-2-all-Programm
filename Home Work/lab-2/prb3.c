#include<stdio.h>
int main()
{
    int n,temp,d,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
            d=n%10;
    rev=rev*10+d;
    n=n/10;
    }
    if(rev==temp)
    printf("%d is a Palindrome number",temp);
    else
        printf("%d is not a Palindrome number",temp);
    return 0;
}
