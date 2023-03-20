#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i=0,j,ind=0,min=0,temp;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements:\n", n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    //SELECTION SORT:
    for(i=0;i<n;i++){
        ind=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[ind]){
                ind=j;
            }
        }
            temp=arr[i];
            arr[i]=arr[ind];
            arr[ind]=temp;
    }
    printf("The sorted array are:\n");
    for(i=0;i<n;i++)
        printf("%d\t", arr[i]);
    printf("\n");
}
