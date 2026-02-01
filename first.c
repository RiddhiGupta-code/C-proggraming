#include<stdio.h>
void main()
{
    float c,d;
    int a,b,ch;
    printf("enter numbers");
    scanf("%d%d%f%f",&a,&b,&c,&d);
    printf("enter choice");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    printf("addition of two numbers %d",a+b);
    break;
    case 2:
    printf("the subtraction of two numbers %d",a-b);
    break;
    case 3:
    printf("multiplication of two numbers %d",a*b);
    break;
    case 4:
    printf("division of the two numbers %f",c/d);
    break;
    case 5:
    break;
    default:
    printf("wrong choice");
    }
}
 