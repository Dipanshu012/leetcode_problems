class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        vector<int> arr=nums;
        while(start<end) {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        for (int i=0;i<arr.size();i++) {
            nums.push_back(arr[i]);
        }
        return nums;
    }
};