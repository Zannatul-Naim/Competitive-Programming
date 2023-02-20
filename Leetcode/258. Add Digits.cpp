class Solution {
public:

    int sum(int n) {
        int s = 0;

        while(n) {
             s = s + n % 10;
             n /= 10;
        }
        return s;
    }

    int addDigits(int num) {
        if(num == 0) return 0;
        int x = sum(num);
        while(!(x >= 1 && x <= 9)) x = sum(x);

        return x;
        
    }
};
