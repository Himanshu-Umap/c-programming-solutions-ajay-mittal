/*
Program 8 | Matrix addition: Add two matrices of order m × n
*/

#include<stdio.h>
main()
{
    int mat1[10][10], mat2[10][10], resultant[10][10];
    int m, n, row, col;
    printf("Enter the order of matrices (max. 10 by 10)\t");
    scanf("%d %d",&m, &n);
    printf("Enter the elements of matrix-1:\n");
    for(row=0;row<m;row++)
    {
        for(col=0;col<n;col++)
            scanf("%d",&mat1[row][col]);
    }
    printf("Enter the elements of matrix-2:\n");
    for(row=0;row<m;row++)
    {
        for(col=0;col<n;col++)
            scanf("%d",&mat2[row][col]);
    }

    for(row=0;row<m;row++)
    {
        for(col=0;col<n;col++){
            resultant[row][col] = mat1[row][col]+mat2[row][col];
        }
    }

    for(row=0;row<m;row++){
        for(col=0;col<n;col++)
            printf("%d \t",resultant[row][col]);
        printf("\n");
    }
}