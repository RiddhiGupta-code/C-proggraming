#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
void main()
{
    int a,b,sum;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("Addition of two numbers is %d",sum);
}