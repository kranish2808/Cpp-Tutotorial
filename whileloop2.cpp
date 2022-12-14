#include<iostream>
using namespace std;

int main()
{
    // print the sum from 0 to n
 int n;
 cout<<"Enter n:";
 cin>>n;
 
int i=1;
int sum=0;

 while(i<=n)
{ 
    sum=sum+i;
    i=i+1;
}

cout<<"The Sum is:"<<sum<<endl;

    
}