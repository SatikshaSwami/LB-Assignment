//Accept character from user and check whether it is small case or not (a-z).

#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    bool bFlag = false;

    while(ch != '\0')
    {
        if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("it is Small Case character");
    }
    else
    {
        printf("it is not a Small Case character");
    }

    return 0;
}