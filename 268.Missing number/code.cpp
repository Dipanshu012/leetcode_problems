class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,result;
        for (int i=0;i<=nums.size()-1;i++) {
            sum+=nums[i];
        }
        int total=(nums.size())*(nums.size()+1)/2;
        result=total-sum;
        return result;
    }
};