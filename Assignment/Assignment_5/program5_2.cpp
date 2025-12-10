// Accept two number form user and Find Max Number

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindMax
//  Description     :   Used to find maximum number
//  Input           :   Integer,Integer
//  Output          :   Maximum Value out of two number
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   20/10/2025
//
////////////////////////////////////////////////////////////////////////

void FindMax(int iNo1, int iNo2)
{
    if((iNo1 > iNo2))
    {
        cout<<iNo1<<"is A greater number";
    }
    else
    {
        cout<<iNo2<<"is A greater number";
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter the Number : \n";
    cin>>iValue1;

    cout<<"Enter the Number : \n";
    cin>>iValue2;

    FindMax(iValue1, iValue2);

    return 0;
}