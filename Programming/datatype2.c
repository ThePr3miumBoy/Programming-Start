#include <stdio.h>
int main()
{
    float x = 3.556;
    double t = 25941.4895446;

    printf("\nThe value of the float is: %f",x);
    printf("\nThe value of the double is: %lf",t);

    printf("\n  %.2f  \n",x); //


    printf("Float captures memory: %ld\n",sizeof(float));
    printf("Double capture memory: %ld\n",sizeof(double));

    //char
    char xy = 'S';
    printf("%c  \n",xy);
    
}