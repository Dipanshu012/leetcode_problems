class Solution {
public:
    bool isPowerOfTwo(int n) {
        int bin=0,rem;
        if (n<1) return 0;
        while(n>0) {
            rem = n%2;
            n=n/2;
            if (bin>INT_MAX/10 || bin<INT_MIN/10) return 0;
            else bin = bin*10+rem;
        }
        if (bin>>1==0) return true;
        else return false;
    }
};