//Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/


#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int removeduplicated_in_sortedarray(vector<int>& nums){
        int i = 0;
        int n = nums.size();

        for(int j = 1; j < n; j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};

int main(){
    vector<int> nums = {1,1,2,2,2,3,4,4,4};
    Solution sol;
    int dupli = sol.removeduplicated_in_sortedarray(nums);

    cout << "Array without duplicates: ";
    for(int i = 0; i < dupli; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}