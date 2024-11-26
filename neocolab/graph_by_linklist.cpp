#include<iostream>
using namespace std;

//Graph by linklist
struct Node{
    int data;
    Node *left;
    Node *right;
};

//In order traversal

int in_order(root, nodes){
    if(root && root.left){
        in_order(root.left, nodes);
    }
}
int main(){

}

