#include<iostream>
#include<cmath>

using namespace std;

int main()
{
//-------defining variables and initializing them-------------    
    double num1,num2;
    char operation,redo;
//--------Printing my name on screen----------------    
    cout<<"Welcome to the calculater program v.1.0 written by Your Name"<<endl;
    cout<<"***************************************************************"<<endl;
    cout<<endl<<endl<<endl;
//--here do loop is used so that the program can be used more then one time
//without exiting the run screen---------------------------    
    do
    {
 //----receiving the variables from input--------------         
    cout<<" Please enter an operation which you like to calculate (+,-,*,/,s)";
    cout<<"[s stands for swap]:";
    cin>>operation ;
    cout<<endl<<endl;
     cout<<" Please enter two numbers to apply your requested operation(";
    cout<<operation<<"):"<<endl<<"1st num:";
    cin>>num1;
    cout<<"2nd num:" ;
    cin>>num2;
    cout<<endl;
 //---used switch function so thet the operater can be decided------------  
    switch (operation)
    {