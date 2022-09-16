#include<stdio.h>
int main()
{
    int n,i,count=0;
    char ch[100];
    printf("enter the array size: ");
    scanf("%d",& n);
    printf("write something: ");
    for(i=0;i<n;i++)
    {
        scanf("%c",&ch[i]);
    }
        for(i=0;i<n;i++)
        {
            if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        {
            count=count+1;
        }
        }
        printf("count: %d",count);



    return 0;
}
