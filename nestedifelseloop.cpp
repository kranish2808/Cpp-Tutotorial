#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a:";
    cin>>a;

// nested loop- using multiple else-if loop
    if(a>0)
    {
        cout<<"A is positive"<<endl;
    }

    else if(a<0)
    {
        cout<<"A is negative"<<endl;
    }

    else if(a==0)
    {
        cout<<"A is zero"<<endl;
    }


 // nested loop- if & else inside else loop
 /*
   if(a>0)
   {
       cout<<"A is positive"<<endl;
   }

   else
   {
       if(a<0)
       {
           cout<<"A is negative"<<endl;
       }

       else
       {
           cout<<"A is zero"<<endl;
       }
   }
   */

// nested loop- using multiple else statement
// nested loop- using multiple if statement
}