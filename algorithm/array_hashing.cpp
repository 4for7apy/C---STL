// count the occurecence of a particular no. in an array using hashing way
// ARRAY HASHING CAN STORE LIMITED NO OF NUMBER TILL 10e6 BUT WHAT IF DIGIT IS 10e8, 10e13 whatever, that why we will have a look to hashing using map



// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //precompute:
//     int hash[13] = {0};
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetching:
//         cout << "No. of occurence" << hash[number] << endl;
//     }
//     return 0;
// }



// Code if the string contains both uppercase and lowercase:



#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    //precompute:
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c] << endl;
    }
    return 0;
}



