// count the occurecence of a particular no. in an map using hashing way
// ARRAY HASHING CAN STORE LIMITED NO OF NUMBER TILL 10e6 BUT WHAT IF DIGIT IS 10e8, 10e13 whatever, that why we will have a look to hashing using map

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     //precompute
//     unordered_map<int, int> mp;
//     for(int i = 0; i <n; i++){
//         mp[arr[i]]++;
//     }
        
//     int q;
//     cin >> q;

//     while(q--){
//         int number;
//         cin >> number;
//         //fetching
//         cout << mp[number] << endl;
//     }
//     return 0;
// }

//Note: Our first priority will be always to use unordered_map and then map. If unordered_map gives a time limit exceeded error(TLE), we will then use the map.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> map;

    for (int i = 0; i < n; i++) {
        map[arr[i]]++;
    }

    for (auto x : map) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
    
}



