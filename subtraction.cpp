#include "subtraction.h"
#include<iostream>
using namespace std;
SUB :: SUB()
{
   cout<<endl<<"Inside the SUB constructor"<<endl;
}

void SUB :: sub()
{
    cout<<"Enter two integer : ";
    cin>>a>>b;
    cout<<"Sub Value is "<<a-b<<endl;
}


