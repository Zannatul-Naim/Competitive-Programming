class Solution {
public:
    int sumOfDigits(int n) {
        
        if(n <= 9) return n;
        int s = 0;
        while(n) {
            s += n%10;
            n /= 10;
        }
        return s;
    }
    
    int differenceOfSum(vector<int>& nums) {
        int s1 = 0, s2 = 0;
        
        for(int i : nums) {
            s1 += i;
            s2 += sumOfDigits(i);
        }
        
        return abs(s1-s2);
    }
};
