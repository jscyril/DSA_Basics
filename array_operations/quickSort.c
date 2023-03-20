#include <stdio.h>
void swap(int arr[],int a, int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
int partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){    
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,high);
    return i+1;
}
void quicksort(int arr[], int low, int high){
    if(low<high){
        int j=partition(arr,low,high);
        quicksort(arr,low,j-1);
        quicksort(arr,j+1,high);
    }
}
void main(){
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements:\n", n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    quicksort(arr,0,n-1);
    printf("\nSorted Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
