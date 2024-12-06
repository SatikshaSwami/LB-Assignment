// Write a program which accept one number and position from user and on that bit.return modified number.

#include<iostream>
using namespace std;

int ONBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iMask <<(iPos -1);

    iResult = iNo | iMask;

    return iResult;

}
int main()
{
    int iValue = 0, iLocation = 0;
    int iRet = 0;

    cout<<"Enter number :\n";
    cin>>iValue;

    cout<<"Enter Position :\n";
    cin>>iLocation;

    iRet = ONBit(iValue, iLocation);

    cout<<"Modified number :"<<iRet<<"\n";

    return 0;
}