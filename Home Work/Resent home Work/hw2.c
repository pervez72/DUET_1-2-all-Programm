#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer[20-99]:");
    scanf("%d",&n);
    //first part
        if(n<20){printf("Out of range");}
        else if(n>99)printf("Out of range");
        else{
    switch(n/10){
    case 2: printf("In words: Twenty"); break;
    case 3: printf("In words: Thirty"); break;
    case 4: printf("In words: Fourty"); break;
    case 5: printf("In words: Fifty"); break;
    case 6: printf("In words: Sixty"); break;
    case 7: printf("In words: Seventy"); break;
    case 8: printf("In words: Eighty"); break;
    case 9: printf("In words: Ninety"); break;
 }  printf(" ");
    switch(n%10){
    case 1: printf("One"); break;
    case 2: printf("Two"); break;
    case 3: printf("Three"); break;
    case 4: printf("Four"); break;
    case 5: printf("Five"); break;
    case 6: printf("Six"); break;
    case 7: printf("Seven"); break;
    case 8: printf("Eight"); break;
    case 9: printf("Nine"); break;
}}return 0;}
