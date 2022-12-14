#include<iostream>
using namespace std;

int main()
{
    int n; // no.for making pattern
    cout<<"Enter n:";
    cin >> n;

    int i = 1;// starting from row 1

    while(i<=n) // row going for row 1 to nth row
    {
        int j = 1;// starting from column 1
         while(j<=n){
           cout<<"*";
           j=j+1;// increase column
        }
        cout<<endl;
        i=i+1;// increase row
    }
}