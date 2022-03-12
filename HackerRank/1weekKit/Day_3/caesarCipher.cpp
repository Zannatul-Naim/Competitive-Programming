#include <bits/stdc++.h>
using namespace std;

string caesarCipher(string str, int k) {
    k = k % 26;
    for(int i = 0 ; i < str.length(); i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            if(str[i] + k > 90)
                str[i] -= 26;
            str[i] += k;
        }
        else if(str[i] >= 97 && str[i] <= 122)
        {   
            if(str[i] + k > 122)
                str[i] -= 26;
            str[i] += k;
        }
    }
    return str;
}

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int k;
    cin >> k;
    cout << caesarCipher(str, k) << endl;
    
    return 0;
}



