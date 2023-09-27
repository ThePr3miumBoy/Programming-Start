#include <stdio.h>
#include <limits.h>
int main()
{
    long long int jj = 13;
    printf("%lld",jj);

    //find range of integers
    printf("\nMinimum range of integer is: %d",INT_MIN);

    printf("\nmaximum range of integer is: %d",INT_MAX);

    printf("\nMinimum range of long int is: %ld\n",LONG_MIN);

    printf("Maximum range of long int is;: %ld\n",LONG_MAX);

    printf("Minimum range of long long int is: %lld",LLONG_MIN);

    printf("\nMaximum range of lomg long int is: %lld",LLONG_MAX);


    return 0;
}
