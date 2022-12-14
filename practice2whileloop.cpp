#include<iostream>
using namespace std;

int main()
{
  // print table of farenhite to celcius  
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