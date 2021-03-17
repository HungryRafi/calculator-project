#include "multiplication.h"
#include<iostream>
using namespace std;
Mul :: Mul()
{
   cout<<endl<<"Inside the MULTI constructor"<<endl;
}


void Mul :: mul()
{
    cout<<"Enter two integer : ";
    cin>>a>>b;
    cout<<"MULTI Value is "<<a*b<<endl;
}


