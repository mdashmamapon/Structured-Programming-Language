#include<stdio.h>
int main()
{
    int ar[100],i,n,pos;
    printf("enter the size of array: ");
    scanf("%d",& n);
    for(i=0;i<n;i++)
    {
        printf("enter array values: ");
        scanf("%d",& ar[i]);
    }
    printf("which position do you want to delete: ");
    scanf("%d",& pos);
    for(i=pos;i<n;i++)
    {
        ar[i]=ar[i+1];
    }
    printf("\n Array after deletion: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}