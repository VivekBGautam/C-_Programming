// recursive program which Display below pattern 

// 1    2   3   4   5

////////////////////////////////////////////////////////////////////////
//
//  Required Header File
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   It is A recursive function which call itself 
//                      And Display Desired pattern 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   01/12/2025
//
////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int cValue = 0;
    static char Ch = 'A';

    if(cValue < iNo )
    {
        cout<<Ch<<"\t";
        cValue++;
        Ch++;
        Display(iNo);
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
    cout<<"Enter Value :\n";
    cin>>iValue;
    Display(iValue);

    return 0;
}