//Write a program which accept two number from user and display position of common ON bits from that two numbers.

#include<iostream>
using namespace std;

void CommonBits(int iNo1, int iNo2)
{
    int iCount = 0;

    while(iNo1 > 0)
    {
        if(iNo1 & 1)
        {
            iCount++;
        
        }
         iNo1 >>= 1;
    }

    while(iNo2 > 0)
    {
        if(iNo2 & 1)
        {
            iCount++;
        
        }
        iNo2 >>= 1;

    }
    cout<<"Number of ON(1) bits :"<<iCount<<"\n";

}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout<<"Enter number :\n";
    cin>>iValue1;

    cout<<"Enter number :\n";
    cin>>iValue2;

    CommonBits(iValue1, iValue2);


    return 0;
}