//Write a program which checks whether first and last bit is On or off. first bit means bit number 1 and last bit means bit number 32.

#include<iostream>
using namespace std;

bool ChkBit(int iNo)
{
    int iMask = 0x80000001;
    int iResult = 0;


    iResult = iNo & iMask;
    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
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
        cout<<"first and last bit is Off\n";
    }
    else
    {
        cout<<"first and last bit is On\n";
    }

    return 0;
}