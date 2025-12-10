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
//  Function Name   :   CheckLeapYear
//  Description     :   Used to check input year is leap year or not
//  Input           :   Integer,Integer,Integer
//  Output          :   It will display weather it is leap year or not
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   20/10/2025
//
////////////////////////////////////////////////////////////////////////

bool CheckLeapYear(int iNo)
{
    if((iNo % 4) == 0)
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

    bRet = CheckLeapYear(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" : is a leap year ";
    }
    else 
    {
        cout<<iValue<<" : is not a leap year ";
    }

    return 0;
}