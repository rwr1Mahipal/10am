#include <stdio.h>
#include <string.h>

int main()
{
    // char ch = 'A';
    // printf("%c", ch);
    char str[] = "Mern Developer\0";
    // printf("\n%s", str);
    // char name[100] = {"JavaScript Developer\0"};
    // printf("\n%s", name);

    for (int i = 0; str[i] != 0; i++)
    {
        printf("%c", str[i]);
    }

    // for (char ch = 'A'; ch <= 'Z'; ch++)
    // {
    //     printf("%c => ", ch);
    //     printf("%d ", ch);
    // }

    // char str[100] = "Mern Developer";
    // printf("%d ", strlen(str));

    // printf("Enter value: ");
    // scanf("%s", &str);
    // fgets(str, 100, stdin);
    // puts(str);

    // printf("%s", strupr(str));
    // printf("\n%s", strlwr(str));
}