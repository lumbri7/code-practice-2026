#include<stdio.h>

int main() {
    // int A[2][2] = {{1, 2},{3, 4}};
    // int B[2][2] = {{5, 6}, {7, 8}};
    // int C[2][2];

    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         C[i][j] = A[i][j] + B[i][j];
    //     }
    // }

    // printf("Sum of matrix A and B is: \n");
    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 2; j++) {
    //         printf("%d", C[i][j]);
    //     }
    //     printf("\n");
    // }

    // int A[4] = {4,5,7,8};
    
    // for(int i=0;i<4;i++){
    //     printf("%d ", A[i]);
    // }
    //         printf("\n");

    int r,c;
    int arr[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("Enter elements: \n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix is: \n");
    for (int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}