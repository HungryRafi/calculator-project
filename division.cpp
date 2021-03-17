#include "division.h"
#include<iostream>
using namespace std;
Div :: Div()
{
   cout<<endl<<"Inside the DIV constructor"<<endl;
}


void Div :: div()
{
    cout<<"Enter two integer : ";
    cin>>a>>b;
    cout<<"DIV Value is "<<a/b<<endl;
}


