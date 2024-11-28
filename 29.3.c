//Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

#include<stdio.h>

int FirstChar(char str[], char ch)
{
    int i = 0;
    
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
             return i;
           
        }
        i++;
    }
    return -1;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue);

    printf("Character location is :%d\n",iRet);
    return 0;
}