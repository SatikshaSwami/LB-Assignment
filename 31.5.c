//Write a program which accept string from user and copy that characters of that string into another string by toggling the case.
#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    int i = 0;

    for(i = 0; src[i] != '\0'; i++)
    {
        if(src[i] >= 'a' && src[i] <= 'z')
        {
            dest[i] = src[i];
            dest[i] = dest[i] - 32;
        }

        else if(src[i] >= 'A' && src[i] <= 'Z')
        {
            dest[i] = src[i];
            dest[i] = dest[i] + 32;

        }        
    }

}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    StrCpySmall(Arr,Brr);

    printf("%s",Brr);

    return 0;
}