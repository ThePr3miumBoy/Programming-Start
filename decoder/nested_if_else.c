#include <stdio.h>
int main()
{
    printf("Enter your age: ");
    int x,y;
    scanf("%d",&x);
    printf("Enter your monthly salary: ");
    scanf("%d",&y);

    if(x<26 && y>35000){
        printf("You're perfect for marrying");
    }
    else{
        printf("You're still a kid");
    }
}