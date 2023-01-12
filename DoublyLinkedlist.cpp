#include <iostream>
using namespace std;

class Node{
 public:
   int data;
   Node *next;
   Node *prev;

 // Constructor
   Node(int data){
      this->data=data;
      next=NULL;
      prev=NULL;
    }
};

void takeInput(Node* &head,Node* &tail){
   int data;cin >> data;

   while(data != -1){
    Node *new Node = new Node(data);
    if(head == NULL){
        head = new Node;
        tail = new Node;
    }

    else{
        tail->next = new Node;
        new Node->prev = tail;
        tail = new Node;
    }
    cin >> data;
   }
}

void print(Node *&head){
    Node *temp=head;

    while(temp!=NULL){
        cout << temp->data << "<->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main(){

  Node *head = NULL;
  Node *tail = NULL;

  takeInput(head,tail);
  
  print(head);

}