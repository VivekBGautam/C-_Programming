// write a program which accept the number froam user and Dispaly factor of that number in reverse order

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayReverseFactors
//  Description     :   Used to Display the factors in reverse order
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   19/10/2025
//
////////////////////////////////////////////////////////////////////////

void DisplayReverseFactors(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo/2); iCnt >= 1;  iCnt)
    {
        if((iNo % iCnt) == 0)
        {
            cout<<iCnt<<"\t";
        }
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    cout<<"enter the number :\n";
    cin>>iValue;

    DisplayReverseFactors(iValue);

    return 0;
}