// write a program to print matrix in format of diagonals = 0, upper right triangle = 1, lower right triangle = -1;

#include<stdio.h>
void read_matrix(int mat[5][5],int);
void display_matrix(int mat[5][5],int);
void main()
{
    int row,col;
    int mat[5][5];
    printf("\n Enter the number of matrix row and coloumn: ");
    scanf("%d %d",&row,&col);
    read_matrix(mat,row);
    display_matrix(mat,row);
}
void read_matrix(int mat[5][5], int r)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i == j)
               mat[i][j] = 0;
            else if(i>j)
               mat[i][j] = -1;
            else
               mat[i][j] = 1;
        }
    }
}

void display_matrix(int mat[5][5], int r)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<r;j++)
           printf("\t %d",mat[i][j]);
    }
}
