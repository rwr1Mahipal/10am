#include <stdio.h>

int main()
{
    // for (int i = 1; i <= 10; i++)
    // {
    //     if(i==5) continue;;
    //     printf("%d ", i);
    // }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}



        