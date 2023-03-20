#include<stdio.h>
int Sentinel(int arr[],int ele,int n);
int Binary(int arr[],int ele,int n);
int Linear(int arr[],int ele,int n);
int main(){
    int n,ele,choice,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element you want to search:\n");
    scanf("%d",&ele);
    printf("1: Sentinel\n2: Binary\n3: Linear\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:Sentinel(arr,ele,n);
            break;
        case 2:Binary(arr,ele,n);
            break;
        case 3:Linear(arr,ele,n);
            break;
        default: printf("Invalid choice");
            break;
    }
    printf("\n");
    return(0);
}
int Sentinel(int arr[],int ele,int n){
    int l=arr[n-1];
    arr[n-1]=ele;
    int i=0;
    while(arr[i]!=ele)
        i++;
    arr[n-1]=l;
    if(i<n-1||arr[n-1]==ele)
    printf("The element %d is present in %d",ele,i);
    else
        printf("Element not found!");
}
int Linear(int arr[],int ele,int n){
    int i,c=0;
    for(i=0;i<n;i++){
        if(arr[i]==ele)
        {
            printf("The element %d is present in index positon %d",ele,i);
            c++;
        }
    }
    if(c==0)
        printf("Element not found!");
}
int Binary(int arr[],int ele,int n){
    int upper,lower,mid,i,j,temp;
    upper=n;
    lower=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d  ", arr[i]);
    }

    while(lower<upper){
        mid=(lower+upper)/2;
        if(ele>arr[mid])
        lower=mid;
        else if(ele<arr[mid])
        upper=mid;
        else if(ele=arr[mid]){
            printf("\nElement %d was found in index position: %d",ele,mid);
            break;
        }
        else
            printf("Element not found!");
    }
}
