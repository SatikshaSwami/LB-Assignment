//Write a recursive program which accept string from user and count white spaces.

#include<stdio.h>

int WhiteSpace(char *str)
{
   static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCount;

}
int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = WhiteSpace(Arr);

    printf("%d\n",iRet);

    return 0;
}