#include<stdio.h>
int main()
{
   int a,d1,d2,d3,sd;
   printf("Enter a three digit number:");
   scanf("%d",&a);
   d1=a%10;
   a=a/10;
   d2=a%10;
   d3=a/10;
   sd=(d1<d2? (d1<d3? d1:d3):(d2<d3? d2:d3));
   printf("Smallest digit is:%d",sd);
   return 0;

}

