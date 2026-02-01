#include<stdio.h>
void main()
{
int a[2][2],i,j,b[2][2],c[2][2];
printf("enter elements");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("enter elements [%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("2x2 matrix is:");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d",a[i][j]);
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("enter elements [%d][%d]: ",i,j);
        scanf("%d",&b[i][j]);
    }
}
printf("2x2 matrix is:");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d",b[i][j]);
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d",c[i][j]);
    }
}
}
