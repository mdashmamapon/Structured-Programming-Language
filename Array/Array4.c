#include<stdio.h>
int main()
{
    int n,i;
    float ar[100],avg,sum=0.00;
    printf("enter the array size: ");
    scanf("%d",& n);
    for(i=0;i<n;i++)
    {
        scanf("%f",& ar[i]);
        sum=sum+ar[i];
        }
    avg=sum/n;
    printf("avg is =%.2f",avg);
    return 0;
}