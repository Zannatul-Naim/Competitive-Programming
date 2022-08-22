#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
      int n;
      cin >> n;
      string s;
      cin >> s;
      string ans = "";
      
      for(int i = 0; i < n; i++) {
        if(s[i] == 'A') ans += "T";
        else if(s[i] ==  'T') ans += "A";
        else if(s[i] == 'G') ans += "C";
        else if(s[i] == 'C') ans += "G";
      }
      cout << ans << endl;
    }
    return 0;
}
