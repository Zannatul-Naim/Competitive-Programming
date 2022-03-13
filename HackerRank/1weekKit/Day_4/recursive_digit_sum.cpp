#include<bits/stdc++.h>
using namespace std;

int superDigit(string str) {
    long long sum = 0;
    for(int i = 0; i < str.size(); i++) {
        sum += (str[i] - '0');
    }
    if(sum > 9) {
        return superDigit(to_string(sum));
    }
    else {
        return sum;
    }
}

int main()
{
    string str;
    cin >> str;
    int k;
    cin >> k;
    long long sum = 0;
    for(int i = 0; i < str.size(); i++) {
         sum += (str[i] - '0');
    }
    sum *= k;
    cout << superDigit(to_string(sum)) << endl;
    return 0;
    
}
