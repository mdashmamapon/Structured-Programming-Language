#include<stdio.h>
int main()
{
    int ar[100],i,n,pos,x;
    printf("enter the size of array: ");
    scanf("%d",& n);

    for(i=0;i<n;i++)
    {
        printf("enter array values: ");
        scanf("%d",& ar[i]);
    }

    printf("which nmbr do you insert and which position: ");
    scanf("%d %d",& x,& pos);


    for(i=n-1;i>=pos-1;i--)

        {
            ar[i+1]=ar[i];
        }
        ar[pos]=x;
    printf("\n Array after insertation: ");
    for(i=0;i<=n;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}