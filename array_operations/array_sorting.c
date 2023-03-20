#include <stdio.h>
int main(){
    int i, degree, coeff[20];
    printf("Enter the maximum power:\n");
    scanf("%d", &degree);
    printf("Enter the coefficients: \n");
    for (i=0;i<=degree;i++){
        printf("x^%d = ", i);
        scanf("%d", &coeff[i]);
    }
    printf("The polynomial is : \n");
    for(i=degree;i>=0;i--){
        printf("%dx^%d", coeff[i], i);
        if(i!=0)
            printf(" + ");
    }
    printf("\n");
}