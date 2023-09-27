/*file name: royal
creator: Hasibul Noman
Date: 7 September 2023
Description: Find out the Royal Number of our Royal Teacher*/

#include <stdio.h>
int main()
{
    int abhi; //Declaration
    
    printf("Please Input the 3 Digit ordinary number that Our Royal Teacher doesn't like: ");

    scanf("%d",&abhi);

    int x = abhi/100;
    
    int y = abhi % 100 / 10;
    
    int z = abhi % 10;

    printf("The Royal Number is: %d", x+y+z);


    return 0;

}