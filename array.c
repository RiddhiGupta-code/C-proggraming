#include<stdio.h>
void main()
{
    int i;
    int a[3],b[3],c[3];
    printf("enter array elements of a:\n");
    printf("enter array elements of b:\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Sum array c:\n");
    for(i=0;i<3;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d",c[i]);
    }
}