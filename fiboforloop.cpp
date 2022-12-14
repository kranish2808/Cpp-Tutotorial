#include <iostream>
using namespace std;

int main()
{

int n=12;

int a = 0;
int b = 1;
cout<< a<<endl;
cout<<b<<endl;

for(int i=1;i<=n;i++)
{
 int sum = a+b;
cout<<sum<<endl;

  a=b;
  b=sum;

}



}