#include <stdio.h>
#define MAXSIZE 10 
int main(){
	int i, degree1, degree2, degree3;
	int arr1[MAXSIZE], arr2[MAXSIZE], arr3[MAXSIZE];
    printf("Enter max power of first polynomial: ");
	scanf("%d", &degree1);
    printf("\nEnter coefficients of first polynomial: ");
	for (i = 0; i <= degree1; i++)
		scanf("%d", &arr1[i]);
    printf("\nEnter max power of second polynomial: ");
	scanf("%d", &degree2);
    printf("\nEnter coefficients of second polynomial: ");
	for (i = 0; i <= degree2; i++)
		scanf("%d", &arr2[i]);
    if (degree1 > degree2)
		degree3 = degree1;
	else
		degree3 = degree2;
	for (i = 0; i <= degree3; i++)
		arr3[i] = 0;
	for (i = 0; i <= degree1; i++)
		arr3[i] += arr1[i];
    for (i = 0; i <= degree2; i++)
		arr3[i] += arr2[i];
    printf("\nThe result of addition: ");
	for (i = degree3; i >= 0; i--)
		if (i == 0)
			printf("%d", arr3[i]);
		else
			printf("%dx^%d + ", arr3[i], i);
    printf("\n");
}