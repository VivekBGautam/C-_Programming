// Accept number form user and Check Number is even or odd 

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
//  Input           :   Integer,Integer,Integer
//  Output          :   Maximum Value out of three number
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   20/10/2025
//
////////////////////////////////////////////////////////////////////////

int FindMax(int iNo1,int iNo2,int iNo3)
{
    if((iNo1 >= iNo2) && (iNo1 >= iNo3))
    {
        return iNo1;
    }
    else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = false;

    cout<<"Enter the first Number : \n";
    cin>>iValue1;

    cout<<"Enter the second Number : \n";
    cin>>iValue2;

    cout<<"Enter the thirt Number : \n";
    cin>>iValue3;

    iRet = FindMax(iValue1, iValue2,iValue3);

    if(iRet == iValue1)
    {
        cout<<iValue1<<" : is greater Number ";
    }
    else if(iRet == iValue2) 
    {
        cout<<iValue2<<" : is greater Number ";
    }
    else
    {
        cout<<iValue3<<" : is greater Number ";

    }

    return 0;
}