//Write a program which accept one number from user and count number of ON(1) bits in it without using % and / operator.

#include<iostream>
using namespace std;

int CountOne(int iNo)
{
    int iCount = 0;

    while(iNo > 0)
    {
        if(iNo & 1)
        {
            iCount++;
        }
        iNo >>= 1;
    }
    return iCount;

}
int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number :\n";
    cin>>iValue;

    iRet = CountOne(iValue);

    cout<<"Number of ON(1) bits :"<<iRet<<"\n";

    return 0;
}