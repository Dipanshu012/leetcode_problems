class Solution {
public:
    int mySqrt(int x) {
        if (x==0) return 0;
        int i=1, j=2;
        while (true) {
            if ((x>=i)&&(x<=i+j)) {
                return i;
            }
            else j+=2;
        }
    }
};