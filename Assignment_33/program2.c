#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char arr[50];
    char cValue;
    int iRet;

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    printf("Enter character : ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Frequency is : %d\n", iRet);

    return 0;
}