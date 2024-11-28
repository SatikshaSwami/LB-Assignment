//Write a program which accept string from user and accept one character. check whether that character is present in string or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt =0; iCnt <= ch; iCnt++)
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
        
    }
    return bFlag;

}
int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == true)
    {
        printf("character found");
    }
    else
    {
        printf("character not found");
    }

    return 0;
}