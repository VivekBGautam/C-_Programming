 // Accept two Number from user and Display first number in Second number of time

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to Display same number in second number of time
//  Input           :   Integer , Integer
//  Output          :   Integer
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   07/12/2025
//
////////////////////////////////////////////////////////////////////////

void Display(int iNo1,int iNo2)
{
    int iCnt = 0;

    if(iNo2 < 0)
    {
        iNo2 = -iNo2;
    }

    for(iCnt = 0; iCnt <= iNo2; iCnt++)
    {
        cout<<iNo1<<"\t";
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

    cout<<"Enter the value that you want to print :\n";
    cin>>iValue1;

    cout<<"Enter how many time you want to display:\n";
    cin>>iValue2;

    Display(iValue1,iValue2);

    return 0;
}