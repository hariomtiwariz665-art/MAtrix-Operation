#include <stdio.h>

void addition(int r, int c, int A[r][c], int B[r][c]) {
    printf("\nAddition:\n");

    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
}

void multiplication(int r1,int c1,int A[r1][c1],
                    int r2,int c2,int B[r2][c2]) {

    if(c1 != r2) {
        printf("\nMultiplication not possible!\n");
        return;
    }

    int result[r1][c2];

    printf("\nMultiplication:\n");

    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
            result[i][j]=0;

            for(int k=0;k<c1;k++) {
                result[i][j]+=A[i][k]*B[k][j];
            }

            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void transpose(int r,int c,int A[r][c]) {
    printf("\nTranspose:\n");

    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
}

int main() {

    // Addition & Transpose
    int r,c;

    printf("Enter rows and columns for Addition: ");
    scanf("%d %d",&r,&c);

    int A[r][c], B[r][c];

    printf("Enter Matrix A:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&A[i][j]);

    printf("Enter Matrix B:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&B[i][j]);

    addition(r,c,A,B);
    transpose(r,c,A);

    // Multiplication
    int r1,c1,r2,c2;

    printf("\nEnter rows and columns of Matrix 1 for Multiplication: ");
    scanf("%d %d",&r1,&c1);

    int M1[r1][c1];

    printf("Enter Matrix 1:\n");
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            scanf("%d",&M1[i][j]);

    printf("Enter rows and columns of Matrix 2 for Multiplication: ");
    scanf("%d %d",&r2,&c2);

    int M2[r2][c2];

    printf("Enter Matrix 2:\n");
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            scanf("%d",&M2[i][j]);

    multiplication(r1,c1,M1,r2,c2,M2);

    return 0;
}