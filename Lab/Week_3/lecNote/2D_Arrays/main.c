#include <stdio.h>
#include <stdlib.h>

int ROW;
int COL;
void getData(int A[][COL]);
void showData(int A[][COL]);
int main()
{
    int A[100][100];
    printf("Please enter the dimensions of the array:");
    scanf("%d%d",&ROW,&COL);
    printf("Please enter %dx%d array:\n",ROW,COL);
    getData(A);
    printf("------------\n");
    showData(A);
    return 0;
}


void getData(int A[][COL])
{
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
            scanf("%d",&A[i][j]);
    }
}

void showData(int A[][COL])
{
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
}
