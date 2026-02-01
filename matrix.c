#include<stdio.h>
void main()
{
int a[2][2],i,j;
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

}
