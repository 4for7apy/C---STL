//Largest Element in an Array

//https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

/* 1st Way Without Sorting 
class Solution{
    public:
    int largest(vector<int>& arr){
        int n = arr.size();

        int max = arr[0];
        for(int i = 0; i < n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
};
*/



/* 2nd Way With Sort */
class Solution{
    public:
    int largest(vector<int>& arr){
        sort(arr.begin(), arr.end());
        return arr[arr.size()-1];
    }
};




int main(){
    Solution sol;
    vector<int> arr;
    cout << "Give the total of element : " << endl;
    int n;
    cin >> n;

    
    for(int i = 0; i < n; i++){
        cout << "Give me the " << i + 1<< " element : " << endl;
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    cout << "The largest no. in an array -> " << sol.largest(arr) << endl;
}