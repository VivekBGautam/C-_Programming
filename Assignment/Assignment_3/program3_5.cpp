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
//  Function Name   :   CheckVowel
//  Description     :   Used to check given input charector vowels or not
//  Input           :   Charector
//  Output          :   It will return true if charector is vowels 
//                      else it will return false
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   18/10/2025
//
////////////////////////////////////////////////////////////////////////

bool CheckVowel(char cChar)
{
    if((cChar >= 65) && (cChar <= 90))
    {
        cChar = cChar+32;
    }

    if((cChar == 'a') || (cChar == 'e') || (cChar == 'i') || (cChar == 'o') || (cChar == 'u'))
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
    char cValue = 0;
    bool bRet = false;

    cout<<"Please enter charector :\n";
    cin>>cValue;

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        cout<<cValue<<" : is a vowel";
    }
    else
    {
        cout<<cValue<<" : is not a vowel";
    }

    return 0;
}