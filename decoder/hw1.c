#include <stdio.h>
int main()
{   float far,x32,x5,x9;
    printf("Input your Farenhite value: ");
    scanf("%f",&far);

    x32 = far - 32;
    x5 = x32 * 5;
    x9 = x5 / 9;
    printf("Celcius is: %f",x9);


  
}