class Solution {
public:
    string addStrings(string num1, string num2) {

        int l = max(num1.size(), num2.size());
        string ans = "";
        int c = 0;

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        int digit1, digit2;

        for(int i = 0; i < l; i++) {

            if(i < num1.size()) {
                digit1 = num1[i] - '0';
            } else digit1 = 0;

            if(i < num2.size()) {
                digit2 = num2[i] - '0';
            } else digit2 = 0;

            ans += ((digit1+digit2+c)%10 + '0');
            c = (digit1+digit2+c) / 10;
        }

        if(c) ans += (c + '0');

        reverse(ans.begin(), ans.end());

        return ans;
        
    }
};
