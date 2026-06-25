#include<stdio.h>

void strRevX(char *str)
{
    char *start=NULL;
    char *end=NULL;
    char temp='\0';
    start=str;

    while(*str!='\0')
    {
        str++;
    }
    str--;
    end=str;
    
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;  
        end--;    
    }

}

int main()
{
    char Arr[50]={'\0'};

    printf("enetr string:\n");
    scanf("%[^'\n']s",Arr);

    strRevX(Arr);
    printf("updated string :%s\n",Arr);

    return 0;
}