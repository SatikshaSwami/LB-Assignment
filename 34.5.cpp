// Write a program which accept one number from user and toggle contents of first and last nibble of the number.Return modified number.(Nibble is a group of four bits)
remain
#include<iostream>
using namespace std;

int ToggleBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult = 0;

    iMask = iMask <<(iPos -1);
   
    iResult = iNo ^ iMask;

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

    iRet = ToggleBit(iValue, iLocation);

    cout<<"Modified number :"<<iRet<<"\n";

    return 0;
}