/*
It keep the largest one at top in every case int, string char
It is not linear data structure it is inside a tree data structure maintaned

It have maximum heap and minimum heap
*/

#include<bits/stdc++.h>
using namespace std;


//maximum heap
/*
int main(){
    priority_queue<int> arpit;

    arpit.push(2);
    arpit.push(1000);
    arpit.push(10);

    while(!arpit.empty()){
        cout << arpit.top() << " ";
        arpit.pop();
    }
}
*/

//minimum heap
int main(){
    priority_queue<int, vector<int>,greater<int>> arpit;

    arpit.push(2);
    arpit.push(1000);
    arpit.push(10);

    while(!arpit.empty()){
        cout << arpit.top() << " ";
        arpit.pop();
    }
}