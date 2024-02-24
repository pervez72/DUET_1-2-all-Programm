#include<stdio.h>
int main()
{
    int arr[100],i,n,j,k;
    printf("Enter the number of element:");
    scanf("%d ",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The input array is:\n");
    for(i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for(k=j+1;k<n; k++){
                    arr[k-1]=arr[k];}
                    j--;
                    n--;

            }
        }
    }
    printf("\nAfter delete duplicate element\n");
    for(i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    return 0;
}
