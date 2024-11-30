// Second Largest Element in an Array without Sorting

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int second_largest(vector<int>& arr){
        int n = arr.size();
        int max = arr[0];
        for(int i = 0; i < n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        //return max;
        int sec_lar = -1;
        for(int i = 0; i < n; i++){
            if(max > arr[i] && arr[i] > sec_lar){
                sec_lar = arr[i];
            }
        }
        return sec_lar;
    }

};

int main(){
    Solution sol;
    vector<int> arr;
    arr = {3, 5, 8, 7};
    cout << "The second largest no is " << sol.second_largest(arr) << endl;
}