#include<iostream>
using namespace std;

int main()
{
 // print sum of all even no.

 int n;
 cout<<"Enter n:";
 cin>>n;
 
int i=1;
int sum=0;

 while(i<=n)
{ 
    sum=sum+i;
    i=i+2;
}

cout<<"The Sum is:"<<sum<<endl;

    
}