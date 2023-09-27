#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the biggest number: ");
    scanf("%d",&x);
    printf("Enter the lowest number: ");
    scanf("%d",&y);

    //operations 
    int add = x + y;
    int min = x - y;
    int mul = x *  y;
    int div = x / y;
    int vagsesh = x % y;

    //display

    printf("The addition of these two number is: %d\n",add);
    printf("The substraction of these two number is: %d\n",min);
    printf("The multiplication of the two number is: %d\n",mul);
    printf("The division of these teo number is: %d\n",div);
    printf("The reminder of these two number is: %d\n",vagsesh);
}
