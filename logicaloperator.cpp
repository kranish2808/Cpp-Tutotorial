#include<iostream>
using namespace std;

int main()
{
int a=23;// (= - Equal to [Assignment operator])
int b=18;
int c= 26;
int d= 23;

    cout << ((a==0) && (a>b)) << endl; //(&& - And operator)
    cout << ((a==0) && (a<b)) << endl; //(&& - And operator)
    cout << ((a==23) && (a>b)) << endl; //(&& - And operator)
    cout << ((a==23) && (a<b)) << endl; //(&& - And operator)

    cout << ((c==0) ||(c>d)) << endl; // (||- Or opertor )
    cout << ((c==0) || (c<d)) << endl; // (||- Or opertor )
    cout << ((c==26) || (c>d)) << endl; // (||- Or opertor )
    cout << ((c==26) || (c<d)) << endl; // (||- Or opertor )

    cout << !(d==0) << endl; // (!- Not operator)
    cout << !(d==23) << endl; // (!- Not operator)


}