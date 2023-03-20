#include <stdio.h>
void merge(int arr[], int l, int m, int r){
    int i,j,k;
    int n1= m - l + 1;
    int n2 = r - m;
    int arr_l[n1], arr_r[n2];
    for(i = 0; i < n1; i++)
        arr_l[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        arr_r[j] = arr[m + 1 + j];
    i = 0,j = 0,k = l; 
    printf("\n\t(VALUE OF N1:%d)", n1);
    printf("\n\t(VALUE OF N2:%d)", n2);
    while(i < n1 && j < n2) {
        if(arr_l[i] <= arr_r[j]){
            arr[k]=arr_l[i];
            i++;
        }
        else{
            arr[k]=arr_r[j];
            j++;
        }
        k++;
    }
    printf("\n\t(VALUE OF I:%d)", i);
    printf("\n\t(VALUE OF J:%d)", j);
    while(i < n1){
        arr[k]=arr_l[i];
        i++;
        k++;
    }
    while(j<n2) {
        arr[k]= arr_r[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r){
    if(l<r){   
        int m =l+(r-l)/2;
        printf("\n\n\n\n(VALUE_OF_MID:%d)",m);
        printf("\n\n(FIRST_RECURSION)Value of lower and mid is:%d\t%d\t",l,m);
        mergeSort(arr,l,m);
        printf("\n\n(SECOND_RECURSION)Value of mid+1 and right is:%d\t%d\t",m+1,r);
        mergeSort(arr,m+1,r);
        printf("\n\n(THRID_RECURSION)Value of lower and mid and right is:%d\t%d\t%d\t",l,m,r);
        merge(arr,l,m,r);
    }
}
int main(){
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements:\n", n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    mergeSort(arr, 0, n- 1);
    printf("\nSorted array is \n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}