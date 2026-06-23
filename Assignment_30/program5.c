#include <stdio.h>

void Display(char ch)
{
    printf("decimal : %d\n", ch);
    printf("octal : %o\n", ch);
    printf("hexadecimal : 0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}