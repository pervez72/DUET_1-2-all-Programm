#include<stdio.h>
int main()
{
    int i,n1,n2,n3,gcd,sn;
    printf("Enter three number :\n");
    scanf("%d%d%d",&n1,&n2,&n3);

    sn=n1<n2?(n1<n3? n1:n3):(n2<n3? n2:n3);
    for(i=1;i<=sn;i++){
        if(n1%i==0 && n2%i==0 && n3%i==0)
            gcd=i;
    }
    printf("GCD is : %d\n",gcd);
    int lcm=0,ln;
    ln=n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3);
    i=ln;
   while(1){
        if(i%n1==0 && i%n2==0 && i%n3==0){
        lcm=i;
   break;
   }
   i=i+ln;
   }
   printf("LCM is:%d",lcm);
    return 0;
}

