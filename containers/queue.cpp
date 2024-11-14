/*
queue follow FIFO

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> arpit;

    arpit.push(1);
    arpit.push(2);
    arpit.push(3);

    cout << arpit.front() << endl;
    cout << arpit.back() << endl;

}