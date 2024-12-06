//Write a program which accept one number from user and range of position from user. Toggle all bits from that range
#include<iostream>
using namespace std;

int ToggleBitRange(int iNo, int iStart, int iEnd)
{
    int iCnt = 0;
    int iMask = 0x1;
    int iResult = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
     iMask = (1 << iCnt);
    iResult =  iNo ^= iMask;
    }
    return iNo;

}
int main()
{
    int iValue = 0;
    int iLocation1 = 0;
    int iLocation2 = 0;
    int iRet = 0;

    cout<<"Enter number :\n";
    cin>>iValue;
    cout<<"Enter the range start :\n";
    cin>>iLocation1;

    cout<<"Enter the range end :\n";
    cin>>iLocation1;

    iRet = ToggleBitRange(iValue, iLocation1, iLocation2);

cout<<iRet<<"\n";

    return 0;
}


