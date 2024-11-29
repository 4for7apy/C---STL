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

void insert_at_specific_position(Node* &head, int value){
    Node* newnode = new Node(value);

    if(head == nullptr){
        head = newnode;
        return;
    }

    
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

    insert_at_specific_position(head, 2);
}
