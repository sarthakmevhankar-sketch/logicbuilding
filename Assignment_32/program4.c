#include <stdio.h>

void DisplayDigits(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c\t",str[i]);
        }
        i++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    DisplayDigits(arr);

    return 0;
}