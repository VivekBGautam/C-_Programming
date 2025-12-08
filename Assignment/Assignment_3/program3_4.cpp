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
//  Function Name   :   ConvertCharector
//  Description     :   Used to chenge the case of given charector
//  Input           :   Charector
//  Output          :   Case Chenged Charector
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   18/10/2025
//
////////////////////////////////////////////////////////////////////////

void ConvertCharector(char Ch)
{

    if((Ch >= 'a') && (Ch <= 'z'))
    {
        char Up = (char)(Ch-32);
        cout<<Up;
    }
    if((Ch >= 'A') && (Ch <= 'Z'))
    {
        char Low = (char)(Ch+32);
        cout<<Low;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = 0;

    cout<<"Please enter charector :\n";
    cin>>cValue;

    ConvertCharector(cValue);

    return 0;
}