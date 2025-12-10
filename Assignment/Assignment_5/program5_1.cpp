// Accept number form user and Check Number is even or odd

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckEvenOdd
//  Description     :   Used to Check number is even or odd
//  Input           :   Integer,Integer,Integer
//  Output          :   it return true if number is even else it return false if number is odd
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   20/10/2025
//
////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = false;

    cout<<"Enter the Number : \n";
    cin>>iValue;

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" : is Even Number ";
    }
    else 
    {
        cout<<iValue<<" : is Odd Number ";
    }

    return 0;
}