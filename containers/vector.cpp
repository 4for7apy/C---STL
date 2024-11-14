/*

Why using list, because it simpler having push_front operation which is not in queue,
insert option requires more time complexity rather than push_front is benificial.
List - uses doubly linked list
vector - uses singly linked list

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arpit;
    arpit.push_back(1);
    arpit.push_back(10);
    arpit.push_back(100);
    arpit.emplace_back(1000);
    for(int i = 0; i < arpit.size(); i++){
        cout << arpit[i] << " ";
    }

    cout << endl <<  "-   - - - - - - -  -- - - - -  - -" << endl;

    // cout << *(arpit.begin()) << endl;
    // cout << (arpit.back()) << endl;

    // cout << endl <<  "-   - - - - - - -  -- - - - -  - -" << endl;

    // last in first and last
    // arpit.erase(arpit.begin());
    // arpit.erase(arpit.begin()+arpit.size()-1);
    // for(auto it : arpit){
    //     cout << it << " ";
    // }


    // deletes in between
    // arpit.erase(arpit.begin()+1, arpit.begin()+3);
    // for(auto it : arpit){
    //     cout << it << " ";
    // }


    // arpit.insert(arpit.begin()+1, 10000);
    // for(auto it : arpit){
    //     cout << it << " ";
    // }


    // vector<int> suraj;
    // suraj = {2, 20, 200, 2000};
    
    // arpit.swap(suraj);


    for(auto it: arpit){
        cout << it << " ";
    }

    cout << endl <<  "-   - - - - - - -  -- - - - -  - -" << endl;

    

}