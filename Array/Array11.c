#include<stdio.h>
int main()
{
    int ar[100],i,n;
    printf("array size: ");
    scanf("%d",& n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Array A: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n Array B: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}