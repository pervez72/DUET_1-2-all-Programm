#include<stdio.h>
int main()
{
    float a,b,x,y;
    printf("Enter the number of unit: ");
    scanf("%f",&a);
    if(a<=50)
        printf("Your bill is:%.2f",a*4);
    else if(50<a && a<=80){
        x=50*4+(a-50)*3;
        printf("Your bill is:%.2f",x);
    }
    else if(81<=a && a<=100){
            b=(50*4)+(30*3)+(a-80)*2;
     printf("Your bill is:%.2f",b);

    }

    else{
            y=((50*4)+(30*3)+(20*2)+(a-100));
        printf("Your bill is:%.2f",y);
    }
    return 0;
}
