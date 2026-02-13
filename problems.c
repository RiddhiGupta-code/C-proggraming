#include<stdio.h>
void main()
{
   int a,b,ch,i,fact=1;
   float c,d;
   int power=1;
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
    printf("subtraction of two numbers %d",a-b);
    break;
    case 3:
    printf("multiplication of two numbers %d",a*b);
    break;
    case 4:
    printf("division of two numbers %f",c/d);
    break;
    case 5:
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("factorial is %d",fact);
    break;
    case 6:
    for(i=1;i<=b;i++)
    {
        power=power*a;

    }
    printf("power is %d",power);
    break;
    case 7:
    break;
    default:
    printf("wrong choice");
   }
}
