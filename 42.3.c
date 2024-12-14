//Write a recursive program which accept string from user and count number of characters.

#include<stdio.h>

int StrlenX(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;

        StrlenX(str);
    }
    return iCount;
   

}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenX(Arr);

    printf("%d",iRet);

    return 0;
}
