#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    if(n >= 26) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
   // cout << str << endl;
    string s;
    int x = 1;
    s.append(x++, str[0]);
    for(int i = 1; i < str.size(); i++) {
        if(str[i-1] != str[i]){
            s.push_back(str[i]);
        }
    }
    
   // cout <<s;
    x = 0;
    bool flag = false;
    for(char ch = 'a'; ch <= 'z'; ch++) {
        if(s[x++] == ch) {
            flag = true;
            continue;
        }
        else {
            flag = false;
            break;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    }
    else {
        cout << "No" << endl;
    }
    
   return 0;
}
