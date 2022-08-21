#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
      long long int x;
      cin >> x;
      bool flag = true;
      for(int i = 1; i <= sqrt(x); i++) {
        if((x-2*i)%(i+2) == 0  &&  x != 2*i) {
          flag = false;
          break;
        }
      }
      if(flag) cout << "NO" << endl;
      else cout << "YES" << endl;
    }
    return 0;
}
