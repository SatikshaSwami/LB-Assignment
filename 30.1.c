//Accept character from user and check whether it is alphabet or not (A-Z a-z).

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    bool bFlag = false;

    while(ch != '\0')
    {
        if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' )
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("it is character");
    }
    else
    {
        printf("it is not a character");
    }

    return 0;
}