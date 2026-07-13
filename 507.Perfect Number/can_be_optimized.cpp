class Solution {
public:
    bool checkPerfectNumber(int num) {
        int add = 0;
        for (int i=1;i<=num/2;i++) {
            if(num%i==0) add+=i;
        }
        if(add==num) return true;
        else return false;
    }
};