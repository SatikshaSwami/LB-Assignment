//Write a program which checks whether 7th & 15th & 21st, 28th bit is on or off.

#include<iostream>
using namespace std;

bool ChkBit(int iNo)
{
    int iMask = 0x8104040;
    int iResult = 0;

    iResult = iNo & iMask;
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
        cout<<"7th & 15th & 21st, 28th bit is ON\n";
    }
    else
    {
        cout<<"7th & 15th & 21st, 28th bit is OFF\n";
    }

    return 0;
}