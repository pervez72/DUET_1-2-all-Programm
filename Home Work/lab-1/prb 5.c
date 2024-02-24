#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Your Grade: ");
    scanf("%c",&ch);
    switch(ch){
case 'A':
    printf("80-100%%");
    break;
case 'B':
    printf("70-79%%");
    break;
case 'C':
    printf("60-69%%");
    break;
case 'D':
    printf("50-59%%");
    break;
case 'F':
    printf("0-49%%");
    break;
default:
    printf("Invalid grade");

    }
    return 0;
}
