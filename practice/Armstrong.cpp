#include<bits/stdc++.h>
using namespace std;

int main(){

    int i = 5;
    while(i > 0){
    int n;
    cin >> n;
    int total = 0;

    int ori = n;

    int size = (int) (log10(n)+1);

    while(n > 0){
        int digit = n % 10;
        int power = 1;
            for (int j = 0; j < size; j++) {
                power *= digit;
            }
        total = total + power;
        n = n/10;
    }
    
    if(ori == total){
        cout << "Armstrong number" << endl;
    }else{
        cout << "Not a Armstrong number" << endl;
    }
    cout << "Ha aur kisi ka check karna hai to btao jaldi" << endl;
    i--;
    }
}