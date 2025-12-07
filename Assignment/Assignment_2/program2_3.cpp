// Accept the Number from user and if Number is less than 10 print "Hello" Otherwise print "Demo"

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
//  Description     :   Used to Display "Hello" if given number is less than 10 otherwise print "Demo"
//  Input           :   Value As Integer 
//  Output          :   Display Hello or Demo as per condition
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   07/12/2025
//
////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        cout<<"Hello\n";
    }
    else
    {
        cout<<"Demo\n";
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

    cout<<"Enter the Value :\n";
    cin>>iValue;

    Display(iValue);

    return 0;
}