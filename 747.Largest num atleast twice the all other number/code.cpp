class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = INT_MIN;
        int index = 0;

        // Find the maximum element and its index
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
                index = i;
            }
        }

        // Check if max is at least twice every other element
        for (int i = 0; i < nums.size(); i++) {
            if (i != index && max < 2 * nums[i]) {
                return -1;
            }
        }

        return index;
    }
};