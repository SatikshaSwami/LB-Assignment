//Accept character from user and check whether it is capital or not (A-Z).

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    bool bFlag = false;

    while(ch != '\0')
    {
        if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("it is Capital character");
    }
    else
    {
        printf("it is not a Capital character");
    }

    return 0;
}