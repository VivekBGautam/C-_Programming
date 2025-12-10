// Accept number form user and Check Number is Positive Or Negetive Or Zero

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckNumber
//  Description     :   used to Check number is positive or negative
//  Input           :   Integer
//  Output          :   It give the output as number is positive or negative
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   20/10/2025
//
////////////////////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        cout<<iNo<<" : is a positive number ";
    }
    else if(iNo < 0)
    {
        cout<<iNo<<" : is a negative number ";
    }
    else
    {
        cout<<iNo<<" : zero is not A negative not a positive ";
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

    cout<<"Enter the Number : \n";
    cin>>iValue;

    CheckNumber(iValue);

    return 0;
}