// Write a program which accept one number and position from user and check whether bit at that position is on or off. if bit is one return true otherwise return false.

#include<iostream>
using namespace std;

bool ChkBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iRet = 0;

    iMask = iMask <<(iPos -1);
    iRet = iNo & iMask;

    if(iRet == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }


}
int main()
{
    int iValue = 0, iLocation = 0;
    bool bRet = false;

    cout<<"Enter number :\n";
    cin>>iValue;

    cout<<"Enter Position :\n";
    cin>>iLocation;

    bRet = ChkBit(iValue, iLocation);

    if(bRet == true)
    {
        cout<<"Bit is ON\n";
    }
    else
    {
       cout<<"Bit is ON\n";

    }

    return 0;
}