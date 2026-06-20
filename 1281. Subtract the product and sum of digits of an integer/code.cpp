class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem,mult=1, sum=0;
        for(int i=1; ;i++) {
            rem=n%10;
            n/=10;
            mult=mult*rem;
            sum=sum+rem;
            if(n<=0)break;
        }
        return mult-sum;
    }
};