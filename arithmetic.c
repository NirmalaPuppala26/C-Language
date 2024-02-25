#include<stdio.h>

int main()
{
    int a,b,add,multiply,substraction,division;
    int mod;
    printf("enter your first num-", a);
    scanf("%d",&a);
    printf("\nenter your second number-",b);
    scanf("%d",&b);
    add=a+b;
    multiply=a*b;
    division=a/b;
    substraction=a-b;
    mod=a % b;
    printf("\nresult is-%d",add);
    printf("\nresult is-%d",substraction);
    printf("\nresult is-%d",multiply);
    printf("\nresult is-%d",mod);
    printf("\nresult is-%d",division);

}