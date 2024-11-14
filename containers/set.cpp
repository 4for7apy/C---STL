/*
Everything here are Sorted and unique
Everything goes in Log N
*/

#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> arpit;
    arpit.insert(1);
    arpit.insert(2);
    arpit.insert(2);
    arpit.insert(4);

    
    cout << arpit.size() << endl;

    arpit.erase(4);

    int cnt = arpit.count(3);
    cout << cnt;


} 