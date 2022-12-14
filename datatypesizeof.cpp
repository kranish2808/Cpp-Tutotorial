#include<iostream>
using namespace std;

int main()
{
    cout<<"Namaste Duniya"<< endl;

    int a=10;
    cout<< a<< endl;

    char b='v';
    cout<< b<< endl;

    bool c=true;
    cout<< c<<endl;

    float f=1.2;
    cout << f << endl;

    double d=7.75;
    cout << d << endl;

    int size1= sizeof(a);
    cout<<"Size of int:"<<size1<<endl;

    int size2= sizeof(b);
    cout<<"Size of char:"<<size2<<endl;

    int size3= sizeof(c);
    cout<<"Size of bool:"<<size3<<endl;

    int size4= sizeof(f);
    cout<<"Size of float:"<<size4<<endl;

    int size5= sizeof(d);
    cout<<"Size of double:"<<size5<<endl;

}