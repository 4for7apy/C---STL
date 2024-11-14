/*
Stack follows LIFO
You can't iterate through a stack using a loop and an index like you would with a vector or an array.

*/


#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> arpit;


    arpit.push(1);
    arpit.push(2);
    arpit.push(3);

    arpit.pop();

    cout << arpit.top() << endl;
    cout << arpit.size() << endl;

    cout << arpit.empty();

    // while(!arpit.empty()){
    //     cout << arpit.top() << " ";
    //     arpit.pop();
    // }

    return 0;
}