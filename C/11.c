#include <stdio.h>

void show()
{
    printf("TNRN Fun.");
}

void show1(int a, int b)
{
    show();
    printf("\nTSRN Fun. %d", a + b);
}

int show2()
{
    return 10;
}

int show3(int a, int b)
{
    return a + b;
}

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    // show();
    // show1(10, 20);
    // int a = show2();
    // printf("\nTNRS Fun. %d", a);

    // int b = show3(100, 500);
    // printf("\nTsrs Fun. %d", b);

    int a = fact(99);
    printf("%d", a);
}