class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        for (int i=0;i<=n-1;i++) {
            arr[i]=0;
            for (int j=0;j<=i;j++) {
                arr[i]+=nums[j];
            }
        }
        return arr;
    }
};