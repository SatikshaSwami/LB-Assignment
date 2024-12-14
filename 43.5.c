//Write a recursive program which accept number from user and return its reverse number.
#include<stdio.h>

int Reverse(int iNo)
{
  int iDigit = 0;
  static int iRev = 0;

  if(iNo != 0)
  {
      iDigit = iNo % 10;

      iRev = iRev * 10 + iDigit;
    
     iNo = iNo /10;
     Reverse(iNo);
  }
  return iRev;
}
int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter number :\n");
   scanf("%d",&iValue);

   iRet = Reverse(iValue);

   printf("%d\n",iRet);

    return 0;
}