#include <stdio.h>
int main()
{
    int a,b;
    a = 5; //here '=' is a operator 

    printf("Input your value: ");
    scanf("%d",&b);
    //b = b+2; (this method also correct)
    b+=2; //'+=' is a operator 
    printf("\nYour output is: %d",b);
    b-=2;
    printf("\nYour output is: %d",b);
    b*=2;
    printf("\nYour output is: %d",b);
    b/=2;
    printf("\nYour output is: %d",b);
    b%=2;
    printf("\nYour output is: %d",b);


    
}