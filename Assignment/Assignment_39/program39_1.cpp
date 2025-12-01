// recursive program which Display below pattern 

// *   *   *   *   *

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
//  Input           :   -
//  Output          :   Charector(Special Symbol)
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   01/12/2025
//
////////////////////////////////////////////////////////////////////////

void Display()
{
    static int iCnt = 0;

    if(iCnt < 5 )
    {
        cout<<"*\t";
        iCnt++;
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