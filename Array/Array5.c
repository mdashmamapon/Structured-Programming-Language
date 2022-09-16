#include<stdio.h>
int main()
{
    int a[100],sum=0,n,i;
    printf("enter the array size: ");
    scanf("%d",& n);
    printf("enter the arrays value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",& a[i]);}
        for(i=0;i<n;i=i+2)
        {
            sum=sum+a[i];
        }

    printf("sum is=%d",sum);

    return 0;
}