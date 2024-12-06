//Write a program which accept one number from user and check whether 9th or 12th bit is on or off.

#include<iostream>
using namespace std;

bool ChkBit(int iNo)
{
    int iMask = 0x900;
    int iResult = 0;

    iResult = iNo | iMask;

    if(iResult == iMask)
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
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number :\n";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }


    return 0;
}


