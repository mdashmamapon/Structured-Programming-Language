#include<stdio.h>
int main()
{
    int n,i;
    int ar[100];
    printf("enter the array size: ");
    scanf("%d",& n);
    for(i=0;i<n;i++)
    {
        scanf("%d",& ar[i]);
    }
    printf("array value is: ");
    for(i=n-1;i>=0;i--)
    {printf("%d ",ar[i]);}
    return 0;
}