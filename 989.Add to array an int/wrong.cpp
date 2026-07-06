class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int rem, i=0;
        while(k) {
            rem=k%10;
            k/=10;
            num[num.size()-1-i]+=rem;
            if(num[num.size()-1-i]>=10) {
                num[num.size()-1-i]%=10;
                num[num.size()-2-i]+=1;
            }
            i++;
        }
        return num;
    }
};