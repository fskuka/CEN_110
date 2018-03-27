#include <stdio.h>
#include <stdlib.h>


void getData(int A[], int n);
void showData(int A[], int n);
int main()
{
    int A[100],n;
    printf("Please enter the number of the elements:");
    scanf("%d",&n);
    printf("Please enter %d elements:\n",n);
    getData(A,n);
    printf("------------\n");
    showData(A,n);
    return 0;
}


void getData(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
}

void showData(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ",A[i]);
    printf("\n");
}
