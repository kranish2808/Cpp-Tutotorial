#include <iostream>
using namespace std;

class QueueArrays{
    
    int firstIndex;
    int nextIndex;
    int size;
    int *arr;
    int capacity;

public:
QueueArrays(){

    arr = new int[10];
    fistIndex = 0;
    nextIndex = 0;
    capacity = 10;
    size = 0;

}

void enqueue(int data){

    if(size == capacity){
       cout << "Queue Overflowed\n" << endl;
       return;
    }
    arr[nextIndex] = data;
    size += 1;
    nextIndex = (nextIndex+1)% capacity;    
}

int dequeue(){

    if(size == 0){
        cout << "Queue Underflow\n" << endl;
        return -1;
    }
    int tobeDeleted = arr[firstIndex];
    firstIndex = (firstIndex+1)% capacity;
    size -= 1;

}

int front(){
  if(size == 0){
     cout << "Queue Underflow\n" << endl;
    return -1;
  }
  return arr[firstIndex];
}

int size(){
    return size;
}

bool isEmpty(){
   return size == 0;
}

};

int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    cout << arr << endl;

}

