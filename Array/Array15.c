#include<stdio.h>
int main()
{
    int ar[100],i,n;
    printf("enter the array size: ");
    scanf("%d",& n);
    for(i=0;i<n;i++)
    {
        printf("enter array value: ");
        scanf("%d",& ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%3==0)
        {
            printf("%d ",(-1));
        }
        else printf("%d ",ar[i]);
    }
    return 0;
}
