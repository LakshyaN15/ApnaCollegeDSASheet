class Solution {
public:
    int getSum(int a, int b) {
        if(b==0) return a;
        if(a==0) return b;
        int ans=a^b;
        int carry=(a&b)<<1;
        return getSum(ans,carry);
    }
};