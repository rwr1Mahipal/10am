#include <stdio.h>

int main()
{
    // int balance =5000, amount;
    // printf("Enter your withdrowl amount: ");
    // scanf("%d", &amount);

    // if(amount <= balance){
    //     if(amount % 100 == 0){
    //         printf("Amount withdrow successfull");
    //     }else{
    //         printf("Amount must be devided by 100");
    //     }
    // }else{
    //     printf("Insuffisient balance");
    // }

    int a, b, c;
    printf("Enter the value of a =");
    scanf("%d", &a);
    printf("Enter the value of b =");
    scanf("%d", &b);
    printf("Enter the value of c =");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("A is largest");
        }
        else
        {
            printf("C is largest");
        }
    }
    else
    {
        if (b > c)
        {
            printf("B is largest");
        }
        else
        {
            printf("C is largest second");
        }
    }
}