#include<stdio.h>
int main(){
    int row,col,i,j,count=0,zer=0;
    printf("Enter number of rows:\n");
    scanf("%d", &row);
    printf("Enter number of columns:\n");
    scanf("%d", &col);
    int arr[row][col];
    printf("Enter the array elements:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d", &arr[i][j]);
        }
    }  
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(arr[i][j]!=0)
                count=count+1;
            else
                zer++;
        }
    }
    if(count<zer){
        printf("It is a sparse matrix!\nNon zero elements are:\n");
        printf("Row\tColumn\tValue");
        for(i=0;i<row;i++){
            printf("\n");
            for(j=0;j<col;j++){
                printf("\n");
                if(arr[i][j]!=0)
                    printf("%d\t%d\t%d ",i,j,arr[i][j]);
            }      
        }
    }else
        printf("It is not a sparse matrix!");
    printf("\n");
    return(0);
}