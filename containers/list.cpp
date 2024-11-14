
/*

Why using list, because it simpler having push_front operation which is not in queue,
insert option requires more time complexity rather than push_front is benificial.
List - uses doubly linked list
vector - uses singly linked list

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> arpit;

    arpit = {2,3,4,5};
    arpit.push_front(1);
    arpit.push_back(6);

    for(auto it:arpit){
        cout << it << " ";
    }

}

