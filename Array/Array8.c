#include<stdio.h>
int main()
{
    int a[100],max,min,n,i;
    printf("enter the array size: ");
    scanf("%d",& n);
    printf("enter the values of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("min is=%d\n",min);
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("max is=%d",max);


    return 0;
}