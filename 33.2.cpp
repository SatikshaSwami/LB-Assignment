//Write a program which accept one number from user and off 7th and 10th bit of that number.return modified number.

#include<iostream>
using namespace std;

int OFFBit(int iNo, int iPos)
{
    int iMask = 0x240;
    int iRet = 0;
   

    iRet = iMask <<(iPos -1);
    iMask = ~iMask;

    iRet = iNo & iMask;
    return iRet;

}
int main()
{
    int iValue = 0;
    int iLocation = 0;
    int iResult = 0;

    cout<<"Enter number :\n";
    cin>>iValue;

    cout<<"Enter location :\n";
    cin>>iLocation;

   iResult =  OFFBit(iValue, iLocation);

    cout<<"Modified number is :"<<iResult<<"\n";

    return 0;
}