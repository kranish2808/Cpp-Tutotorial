#include<bits/stdc++.h>
using namespace std;

int main()
{

char ch;
cout<<"Enter ch:";
cin>>ch;
// here we use ascii codes to find the value of (A to Z),(a to z) & (0 to 9)
if(ch>=65&&ch<=90)
{
    cout<<"This is Uppercase"<<endl;
}

else if(ch>=97&&ch<=122)
{
    cout<<"This is Lowercase"<<endl;
}

else if(ch>=48&&ch<=57)
{
    cout<<"This is numeric";
}


}