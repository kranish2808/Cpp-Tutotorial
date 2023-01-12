#include <iostream>
#include <stack>
using namespace std;

int main(){

//Create a Stack
stack<int>s;

//Insert a element in Stack 
 s.push(5);
 s.push(2);
cout << s.top() << endl;
 s.pop();
 s.pop();

if(s.empty()){
    cout << "Stack is Empty" << endl;
}
else{
    cout << "Stack is not Empty" << endl;
}
 return 0;
}