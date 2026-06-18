class Solution {
public:
    int bitwiseComplement(int n) {
        if (n==0) return 1;
        int ans=0,rem,comp=0;
        while(n) {
            rem = n%2;
            if (rem==0) rem=1;
            else rem=0;
            n/=2;
            if (ans>INT_MAX/10||ans<INT_MIN/10) return 0;
            else ans = ans*10+rem;                                          fails for test case 10;
        }
        int power = 1;
        while(ans) {
            rem = ans%10;
            ans/=10;
            if (comp>INT_MAX/10||comp<INT_MIN/10) return 0;
            else comp = comp+rem*power;
            power = power*2;
        }
        return comp;
    }
};