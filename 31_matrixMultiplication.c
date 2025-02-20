#include<stdio.h>
int main(){
    int rows1,cols1,rows2,cols2;
    mn:
    printf("Enter the number of rows and columns for the first matrix:");
    scanf("%d%d",&rows1,&cols1);
    printf("Enter the number of rows and columns for the second matrix:");
    scanf("%d%d",&rows2,&cols2);
    if(cols1!=rows2){
        printf("Matrix multiplication is not possible with these dimensions.\n");
        goto mn;
    }
    int matrix1[rows1][cols1],matrix2[rows2][cols2],product[rows1][cols2];
    printf("Enter elements of the first matrix:\n");
    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols1;j++){
            printf("Element[%d][%d]:",i+1,j+1);
            scanf("%d",& matrix[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for(int i=0;i<rows2;i++){
        for(int j=0;j<cols2;j++){
            printf("Element[%d][%d]:",i+1,j+1);
            scanf("%d",& matrix2[i][j]);
        }
    }
    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols2;j++){
            product[i][j]=0;
        }
    }
    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols2;j++){
            for(int k=0;k<cols1;k++){
                product[i][j]+=matrix[i][k]*matrix2[k][j];
            }
        }
    }
    printf("\n Product of the matrices:\n");
    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols2;j++){
            printf("%d",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}