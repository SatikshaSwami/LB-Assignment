//Accept character from user and check whether it is digital or not (0-9).

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    bool bFlag = false;

    while(ch != '\0')
    {
        if(ch >= '0' && ch <= '9')
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

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("it is Digit");
    }
    else
    {
        printf("it is not a Digit");
    }

    return 0;
}