//Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

#include<stdio.h>
int Difference(char *str)
{
    int lowerCnt = 0;
    int upperCnt = 0;
  

    while(*str != '\0')
    {
        if(*str >='a' && *str <='z')
        {
            lowerCnt++;
        }
        else if(*str >='A' && *str <='Z')
        {
            upperCnt++;
        }
        str++;
       
    }

    return lowerCnt - upperCnt;


}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d\n",iRet);

    return 0;
}