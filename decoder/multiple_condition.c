#include <stdio.h>
int main()
{
    printf("Please input your value: ");
    int x;
    scanf("%d",&x);

    if(x>0){
        printf("Your Value '%d' is Positive \n",x);
    }
    else if(x==0){
        printf("Your Value is Zero \n");
    }
    else{
        printf("Your Value '%d' is Negative \n",x);
    }
}