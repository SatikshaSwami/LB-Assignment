//Write a program which accept string from user and accept one character. Return frequency of that character.

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0, iCount = 0;
    

    for(iCnt =0; iCnt <= ch; iCnt++)
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
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Character frequency is :%d\n",iRet);
    return 0;
}