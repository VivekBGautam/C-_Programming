// write a program which accept the number from user and Dispaly diffrence between factor and non factor

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DiffBetwFactorAndNonFactor
//  Description     :   Used to Display Differece Between Factor And Non Factor
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   19/10/2025
//
////////////////////////////////////////////////////////////////////////

int DiffBetwFactorAndNonFactor(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0, iSumNonFact;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    return (iSumFact - iSumNonFact);
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"enter the number :\n";
    cin>>iValue;

    iRet = DiffBetwFactorAndNonFactor(iValue);

    cout<<"Diffrence between All Factor and  Non factors : "<<iRet<<"\n";

    return 0;
}