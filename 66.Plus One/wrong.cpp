class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long num=0;                        //just because of this
        for(int i=0;i<digits.size();i++) {
            num*=10;
            num+=digits[i];
        }
        num+=1;
        vector<int> arr;
        int rem,j=0;
        while(num) {
            rem=num%10;
            arr.push_back(rem);
            num/=10;
            j++;
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};