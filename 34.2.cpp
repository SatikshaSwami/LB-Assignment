// Write a program which accept one number and position from user and off that bit.return modified number.

#include<iostream>
using namespace std;

int OFFBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iMask <<(iPos -1);
    iMask = ~iMask;

    iResult = iNo & iMask;

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

    iRet = OFFBit(iValue, iLocation);

    cout<<"Modified number :"<<iRet<<"\n";

    return 0;
}