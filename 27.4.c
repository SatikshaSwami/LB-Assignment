//Write a program which accept string from user and check whether it contains vowels in it or not.


#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    bool bFlag = false;
  
  while(*str != '\0')
  {
    char ch = *str;

     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
  {
    return true;
  }
    str++;

  }
  return false;
  

  }
 

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;
}