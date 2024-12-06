//Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.
#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    int i = 0, j = 0;

    for(i = 0; src[i] != '\0'; i++)
    {
        if(src[i] != ' ' && src[i] != '\t' && src[i] != '\n')
        {
            dest[j++] = src[i];
        }

    }
    dest[j] ='\0';

}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    StrCpyX(Arr,Brr);

    printf("Original string : %s\n",Arr);
    printf("string without space : %s\n",Brr);

    return 0;
}