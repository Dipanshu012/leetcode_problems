class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if (N==0) return 1;
        else if (N>0) {
            double output=1;
            for (int i=0;i<N;i++) {
                output*=x;
            }
            return output;
        }
        else {
            double output=1/x;
            for (int i=0;i>N+1;i--) {
                output*=1/x;
            }
            return output;
        }
    }
};