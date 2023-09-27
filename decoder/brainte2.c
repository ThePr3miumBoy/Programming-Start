#include <stdio.h>
#include <math.h>
int main()
{
    int x,fdig,f,sdig,s,tdig,t;
    printf("Please Input 3 Digits Number: ");
    scanf("%d",&x);

    fdig = x/100;

    f = pow(fdig,2);
    sdig = (x%100)/10;
    s = pow(sdig,2);

    tdig = x%10;
    t = pow(tdig,2);

    printf("Your desired Output is: %d",f+s+t);
    
}