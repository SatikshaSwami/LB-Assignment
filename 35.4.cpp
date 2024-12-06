//Write a program which accept one number, two positions from user and check whether  bit at first or bit at second position is ON or oFF.

#include<iostream>
using namespace std;

bool ChkBit(int iNo, int iPos1, int iPos2)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iNo <<(iPos1, iPos2 -1);
    iResult = iNo | iMask;

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
    int iValue = 0, iLocation1 = 0, iLocation2 = 0;
    bool bRet = false;

    cout<<"Enter number :\n";
    cin>>iValue;

    cout<<"Enter position1 :\n";
    cin>>iLocation1;

    cout<<"Enter position2 :\n";
    cin>>iLocation2;

    bRet = ChkBit(iValue, iLocation1, iLocation2);

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


