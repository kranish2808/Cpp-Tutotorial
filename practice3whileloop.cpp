#include<iostream>
using namespace std;

int main()
{
    // check the no. is prime or not?
 int n;
 cout<<"Enter n:";
 cin>>n;
 
int i=2;

 while(i<n)
{ 
   if(n%i==0)
   {
       cout<<" Prime for "<< i <<endl;
   }
     else
    {
        cout<<" Not Prime for "<< i <<endl;
    }
    i=i+1;
}
    
} 