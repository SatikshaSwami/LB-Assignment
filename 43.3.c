//Write a recursive program which accept string from user and count number of small character. 
#include<stdio.h>

int Small(char *str)
{
   static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
          iCount++;
        }
        str++;
        Small(str);
    }
    return iCount;

}
int main()
{
   char Arr[30];
   int iRet = 0;

   printf("Enter string :\n");
   scanf("%[^'\n']s",Arr);

    iRet = Small(Arr);

    printf("%d\n",iRet);
    return 0;
}