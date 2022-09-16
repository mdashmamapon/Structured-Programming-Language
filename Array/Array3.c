#include<stdio.h>
int main()
{
    int n,i,sum=0;
    int ar[100];
    printf("enter the array size: ");
    scanf("%d",& n);
    for(i=0;i<n;i++)
    {
        scanf("%d",& ar[i]);
        if(ar[i]%2==0)
        {
            sum=sum+ar[i];
        }
    }
    printf("sum is =%d",sum);
    return 0;
}