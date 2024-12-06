//Write a program which accept string from user and copy that characters of that string into another string in reverse order.
#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *start = src;
    char *End = src;

    char temp = '\0';

    while(*End != '\0')
    {
        End++;
    }
   End--;

   while(start < End)
   {
        temp = *start;
        *start = *End;
        *End = temp;

        start++;
        End--;

   }

}
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    StrCpyRev(Arr,Brr);

    printf("%s",Arr);

    return 0;
}