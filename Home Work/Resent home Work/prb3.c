#include<stdio.h>
int main()
{
        int n,i;
  printf("Enter the range : ");
  scanf("%d",&n);
  float arr[n];
  printf("Array element is:");
  for(i=0; i<n; i++){
    scanf("%f",&arr[i]);
  }
  float max=arr[0],min=arr[0],sum=0,avg;
  for(i=0; i<n; i++){
    if(arr[i]>max){
        max=arr[i];
    }
  if(arr[i]<min){
        min=arr[i];}
    sum=sum+arr[i];
  }
  avg=sum/n;
  printf("Maximum =%f\n",max);
  printf("Minimum =%f\n",min);
   printf("Average =%f",avg);
return 0;
}
