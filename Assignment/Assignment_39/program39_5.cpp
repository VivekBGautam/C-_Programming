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

void Display( )
{
    static int cValue = 0;
    static char Ch = 'a';

    if(cValue < 5 )
    {
        cout<<Ch<<"\t";
        cValue++;
        Ch++;
        Display();
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}