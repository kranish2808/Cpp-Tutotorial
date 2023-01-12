#include <iostream>
#include <queue>
using namespace std;

int main(){

    //create a queue
    queue<int> q;

    //inserting element
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    //gives front element
    cout << q.front() << endl;

    // gives last element
    cout << q.back() << endl;

    // gives the size of the queue
    cout << q.size() << endl;

    // check queue is empty or not
    cout << q.empty() << endl;


    // remove element
    q.pop();
    q.pop();

    cout << q.front() << endl;

    return 0;
    
}