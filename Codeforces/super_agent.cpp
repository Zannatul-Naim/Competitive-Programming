#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
    string s[3];
    
    cin >> s[0] >> s[1] >> s[2];
    
    reverse(s[2].begin(), s[2].end());
    
    if(s[0] == s[2] && s[1][0] == s[1][2]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
