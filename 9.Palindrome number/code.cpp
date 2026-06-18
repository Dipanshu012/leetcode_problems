class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0,rem,num = x;
        if (x<0) return 0;
        while(num>0) {
            rem=num%10;
            num/=10;
            if(rev>INT_MAX/10||rev<INT_MIN/10) return 0;
            else rev=rev*10+rem;
        }
        if (x==rev) return 1;
        else return 0;
    }
};