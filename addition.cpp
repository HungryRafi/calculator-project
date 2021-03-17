#include "addition.h"
#include<iostream>
using namespace std;
Rafi :: Rafi()
{
   cout<<"Inside the Rafi constructor"<<endl;
}
void Rafi :: display()
{
    cout<<"Display Function work properly"<<endl;
}

void Rafi :: add()
{
    cout<<"Enter two integer : ";
    cin>>a>>b;
    cout<<"Adding Value is "<<a+b<<endl;
}
