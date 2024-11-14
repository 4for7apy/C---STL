// It is exactly similar to list and vector

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> arpit;

    arpit = {2,3,4,5};
    arpit.push_back(6);
    arpit.push_front(1);

    for(auto it : arpit){
        cout << it << " ";
    }
    cout << endl << " ----------------------------------- " << endl;

    cout << arpit.front() << endl;
    cout << arpit.back() << endl;

}