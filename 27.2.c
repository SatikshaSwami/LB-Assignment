//Write a program which accept string from user and count number of small characters.

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
  

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
           str++;
    }
    return iCnt;


}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("%d\n",iRet);

    return 0;
}