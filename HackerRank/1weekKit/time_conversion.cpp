#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    if(str.substr(str.size()-2 ,2) == "PM") {
        int x = (str[0] - '0') * 10 + (str[1] - '0');
        if(x < 12) {
            x = x + 12;
        }
        str.replace(0, 2, to_string(x));
        str.erase(str.size()-2);
        cout << str << endl;
    }
    else {
        int s = str.size();
        int x = (str[0] - '0') * 10 + (str[1] - '0');
        if(x >= 12) {
            x = x - 12;
            str.replace(0, 2, to_string(x));
        str.erase(str.size()-2);
        if(str.size() < (s - 2))
            str = "0" + str;
            cout << str << endl;
        }
        else {
            str.erase(str.size()-2);
        cout << str << endl;
        }
        

    }
    
    return 0;
} 
