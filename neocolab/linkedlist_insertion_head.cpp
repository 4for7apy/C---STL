#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this-> next = NULL;
    }
};

void insert_at_beginning(Node* &head, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        return;
    }

    newnode -> next = head;
    head = newnode;
}

void display(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout << current -> data << " -> ";
        current = current -> next;
    }
    cout << "NULL" << endl;
}


int main(){
    Node* head = NULL;

    insert_at_beginning(head, 20);
    insert_at_beginning(head, 40);
    insert_at_beginning(head, 60);
    display(head);
}
