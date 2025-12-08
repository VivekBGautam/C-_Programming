// Write A program which Accept one Number from user and print that number of even number on Screen 

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   PrintEven
//  Description     :   Used to Display Even Number on screen
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   18/10/2025
//
////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    if(iNo <= 0)
    {
        return;
    }

    iCnt = 1;

    while(iCnt <= iNo)
    {
        iMult = 2 * iCnt;
        iCnt++;
        cout<<iMult<<"\t";
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

    PrintEven(iValue);

    return 0;
}