#include<stdio.h>
int main()
{
    char ch;
    printf("Which operator want you use\n");
    scanf("%c",&ch);

    int x,y;
    printf("Enter two number:\n");
    scanf("%d%d",&x,&y);



    switch(ch){
case '+':
    printf("Summation is : %d",x+y);
    break;
case '-':
    printf("Substraction is:%d",x-y);
    break;
case '*':
    printf("Multiplication is:%d",x*y);
    break;
case '/':
    if(y!=0)
    printf("Division is:%d",x/y);
    else
        printf("Math Error");
    break;
default:
    printf("Operator is invalid");
    }
    return 0;
}
