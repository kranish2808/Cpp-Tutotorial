#include <iostream>
using namespace std;

class Node{ // create a node in linkdlist
 public:
  int data; // store data 
  Node* next; // store next address

    // constructor
    Node(int data){ 
      this -> data = data;
      this -> next = NULL;
    }

    // destructor
    ~Node(){
       int value = this -> data;
       if(this -> next != NULL){
         delete next;
         this -> next = NULL;
       }
       cout << "memory freed for " << value << endl;
    }

};

void insertAtHead(Node* &head, int d){ // insert at head

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

/*void insert(Node*&head,int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;

}*/

void insertAtTail(Node* &tail,int data){ // insert at end
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;

}

void inserAtPosition(Node* &tail,Node* &head,int position,int data){  //insert at position
    
    // insert at Start
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    //insert at Last position
    if(temp -> next == NULL){
        insertAtTail(tail,data);
        return;
    }

    //creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert; 

}

void deleteNode(int position,Node* &head){
    // deleting first node
    if(position == 1){
      Node* temp = head;
      head = head -> next;
      temp -> next = NULL;
      delete temp;
    }

    else{
        //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt <= position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

void printLinkedlist(Node* &head){ // print the nodes of linkedlist

    Node* temp = head;

    while(temp!= NULL){
        cout << temp -> data << " ";
     temp = temp -> next;
    }
   cout << endl;
}

int main(){

    //create a new node
    Node* node1 = new Node(10);

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    printLinkedlist(head);


    insertAtHead(head,12);
    //insert(head,14);
    printLinkedlist(head);
    insertAtTail(tail,15);
    printLinkedlist(head);
    inserAtPosition(tail,head,1,19);
    printLinkedlist(head);
    inserAtPosition(tail,head,2,23);
    printLinkedlist(head);
    inserAtPosition(tail,head,6,23);
    inserAtPosition(tail,head,6,23);
    inserAtPosition(tail,head,6,23);
    printLinkedlist(head);

    deleteNode(1,head);
    printLinkedlist(head);
    deleteNode(2,head);
    printLinkedlist(head);
    deleteNode(4,head);
    printLinkedlist(head);


    return 0;

}