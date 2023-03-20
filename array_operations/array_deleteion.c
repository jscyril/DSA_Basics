#include <stdio.h>
int main(){
    int n=0,i=0,j=0,pos=0,ele=0;
    printf("Enter array size:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }retry:
        printf("Enter element to be deleted:\n");
        scanf("%d", &ele);
    //searching element:
    for(i=0;i<n;i++){
        if(arr[i]==ele){
            pos=i;
            break;
        }else
            continue;
    }if(arr[pos]!=ele){
        printf("ELement not found!\nPlease enter an element that is present within the array!\n");
        goto retry;
    }else
        printf("Element found at index no:%d\n", pos);
    /*deletion*/
    for(i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }printf("The array elements after deletion are:\n");
    for(i=0;i<n-1;i++){
        printf("%d\t", arr[i]);
    }printf("\n");
}