#include <stdio.h>

int CountWhite(char *str)
{
    int i = 0;
    int iCount=0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            iCount++;
        }
        i++;
    }
    return iCount;
}

int main()
{
    char arr[100];
    int iRet=0;
    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    iRet=CountWhite(arr);

    printf("white spaces in string  %d", iRet);

    return 0;
}