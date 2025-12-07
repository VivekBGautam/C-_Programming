// Accept the Number from user and Check wether the number is even or odd

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<stdbool.h>
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to Check number is even or odd
//  Input           :   Integer
//  Output          :   it will return true if number is positive otherwise return false 
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   07/12/2025
//
////////////////////////////////////////////////////////////////////////

bool Display(int iNo)
{
    if(iNo % 2 == 0)
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
    int iValue1 = 0;
    bool bRet = 0;

    cout<<"Enter the value:\n";
    cin>>iValue1;

    bRet = Display(iValue1);

    if(bRet == true)
    {
        cout<<iValue1<<" : is even value";
    }
    else 
    {
        cout<<iValue1<<" : is Odd value";
    }

    return 0;
}