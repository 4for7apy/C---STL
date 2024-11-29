#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insert_at_end(Node* &head, int value){
    Node* newnode = new Node(value);

    if(head == nullptr){
        head = newnode;
        return;
    }
    
    Node* current = head;
    while(current -> next != NULL){
        current = current -> next;
    }
    current -> next = newnode;
}

void display(Node* head){
    while(head != nullptr){
        cout << head -> data << " -> ";
        head = head -> next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = NULL;
    insert_at_end(head, 20);
    insert_at_end(head, 40);
    insert_at_end(head, 60);

    display(head);
}