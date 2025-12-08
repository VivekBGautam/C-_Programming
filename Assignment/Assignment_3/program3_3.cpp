// Write A program which Accept one Number from user and print that number of even factor of that number

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayFactor
//  Description     :   Used to Display Even Number on screen
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   18/10/2025
//
////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt ) == 0 && (iCnt % 2) == 0)
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

    cout<<"Please enter the Number :\n";
    cin>>iValue;

    DisplayFactor(iValue);

    return 0;
}