#include<iostream>
using namespace std;

int main()
{
int a; // take a variable "a"
cout<<"Enter A:"; //prints "Enter A"
cin>>a; // take input in "a" it does not reads space,enter,tab

if(a>0) //if loop with condition
{
 cout<<"A is positive"<< endl; //if condition is true print this
}
 else
 {
     cout<<"A is negatiive"<<endl; //if condition is false print this
 }   


    int c;
    int d;

    cout<<"Enter c:";
    cin>>c;

    cout<<"Enter d:";
    cin>>d;

    cout<<c<<endl; // (endl) is used to end the current line
    cout<<d<<endl;

    int e;
    cout<<"Enter e:";
    e=cin.get(); // it takes input as characters using (ASCII Table).Also supports tab,enter & space as input.

    cout<<"Value of a is:"<<e<<endl;

/*
int a;
cout<<"Enter age:";
cin>>age;

if(age<45)
{
    cout<<"mummy"<<endl;
}
else
{
    cout<<"papa"<<endl;
}
*/
}