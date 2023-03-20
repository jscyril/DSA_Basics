#include<stdio.h>
int main(){
    int n,i,ele,pos;
    printf("Enter array size:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d array elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("Enter the new array element:\n");
    scanf("%d", &ele);
    printf("Enter positon of new array element:\n");
    scanf("%d", &pos);
    //insertion:
    for(i=n;i>=pos-1;i--)
        arr[i+1]=arr[i];
    arr[pos-1]=ele;
    printf("Array elements after insertion is:\n");
    for(i=0;i<=n;i++)
        printf("%d  ", arr[i]);
    printf("\n");
}