#include<stdio.h>
int main()
{
    int n,i,d,l;
    printf("Enter the number of array element:");
    scanf("%d",&n);
    int arr[100];
    printf("Enter %d integers: ",n);
    for(i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter data to insert in the list: ");
    scanf("%d",&d);
    printf("Enter location to insert at: ");
    scanf("%d",&l);
    printf("List before insertion of new data:");
    for(i=1; i<=n; i++){
           printf("%d,",arr[i]);
     }
    for(i=n+1; i>l; i--){
        arr[i]=arr[i-1];
    }
           arr[l]=d;
   printf("\nList after insertion of new data:");
    for(i=1; i<=n+1; i++){
        printf("%d,",arr[i]);
    }
    return 0;
}
