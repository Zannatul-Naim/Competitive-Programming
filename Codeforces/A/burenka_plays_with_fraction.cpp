#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
      long long int a, b, c, d;
      cin >> a >> b >> c >> d;
      if(c == 0 && a == 0) cout << 0 << endl;
      else if(c == 0 || a == 0) cout << 1 << endl;
      else if(b*c == a*d) cout << 0 << endl;
      else if(max(b*c, a*d)% min(b*c, a*d) == 0) cout << 1 << endl;
      else cout << 2 << endl;
    }
    return 0;
}
