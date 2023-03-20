#include<stdio.h>
void insertionSort(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        j=i;
        while(j>0 && arr[j-1]>arr[j]){
            temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j=j-1;
        }
    }
}
int main(){
    int n,i=0,j,ind=0,min=0,temp;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements:\n", n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    insertionSort(arr,n);
    printf("Sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}