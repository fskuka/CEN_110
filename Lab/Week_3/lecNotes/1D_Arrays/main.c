#include <stdio.h>

void getData(int A[], int n);
void showData(int A[], int n);
void modify(int A[], int n);
int max(int A[], int n);
int min(int A[], int n);

int main()
{
    int A[100],n;
    int minElm,maxElm;
    printf("Please enter the number of the elements:(<=100)");
    scanf("%d",&n);
    printf("Please enter %d elements: ",n);
    getData(A,n);
    minElm=min(A,n);
    maxElm=max(A,n);
    printf("\n==================================\n");
    printf("Smallest value in the array is: %d\n",minElm);
    printf("Largest value in the array is: %d\n",maxElm);
    printf("\nList Before modify()\n");
    showData(A,n);
    modify(A,n);
    printf("\nList After modify()\n");
    showData(A,n);
    return 0;
}

void getData(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
        scanf("%d",&A[i]);
        return;
}

void showData(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ",A[i]);
    printf("\n");
    return;
}

void modify(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
        A[i]*=2;
    return;
}

int max(int A[], int n)
{
    int i;
    int max=A[0];
    for(i=1;i<n;i++)
        if(A[i]>max)
        max=A[i];
    return max;
}

int min(int A[], int n)
{
    int i;
    int min=A[0];
    for(i=1;i<n;i++)
        if(A[i]<min)
        min=A[i];
    return min;
}
