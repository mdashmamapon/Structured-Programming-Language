#include<stdio.h>
int main()
{
    int a[100],sum=0,n,i;
    printf("enter the array size: ");
    scanf("%d",& n);
    printf("enter the values of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}