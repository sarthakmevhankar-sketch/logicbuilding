#include<stdio.h>

int LastChar(char *str, char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    i--;   

    while(i >= 0)
    {
        if(str[i] == ch)
        {
            return i;
        }
        i--;
    }

    return -1;
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

    iRet = LastChar(arr, cValue);

    printf("Last occurance of index = %d\n", iRet);

    return 0;
}