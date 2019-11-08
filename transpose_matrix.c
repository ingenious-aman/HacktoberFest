#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows in the matrix:");

    scanf("%d",&r);

    printf("Enter the number of columns in the matrix:");

    scanf("%d",&c);

    int matrix[r][c];

    printf("Enter the elements of the matrix:\n");
int i=0,j=0;
    do{
            j=0;
        for(j=0;j<c;j++)
        {
            printf("\t");
        scanf("%d",&matrix[i][j]);
        }

        i++;
    }while(i<r);


    int transpose[c][r];
    for(int k=0;k<r;k++)
    for(int z=0;z<c;z++)
    transpose[z][k]=matrix[k][z];


    for(int w=0;w<c;w++)
    {
        for(int m=0;m<r;m++){
            printf("%d",transpose[w][m]);
            printf("\t");
        }
        printf("\n");

    }
   return 0;
}
