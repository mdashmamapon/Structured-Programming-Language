#include<stdio.h>
int main()
{
    int ar1[100],ar2[100],ar3[100],n,i;
    printf("enter the size of array: ");
    scanf("%d",& n);
    printf("1st array values are: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",& ar1[i]);
    }
    printf("\n 2nd array values are: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",& ar2[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        ar3[i]=ar1[i]+ar2[i];
        printf("%d ",ar3[i]);
    }


    return 0;
}
