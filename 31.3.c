//Write a program which accept string from user and copy that characters of that string into another string by converting  all small characters into capital case.
#include<stdio.h>

void StrCpyCpy(char *src, char *dest)
{
    int i = 0;

    for(i = 0; src[i] != '\0'; i++)
    {
        if(src[i] >= 'a' && src[i] <= 'z')
        {
            dest[i] = src[i] - 32;
        }

    }

}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    StrCpyCpy(Arr,Brr);

    printf(" %s\n",Brr);

    return 0;
}