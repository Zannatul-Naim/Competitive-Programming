#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
      int n;
      cin >> n;
      if(n < 0) n = -n;
      if(n == 1) cout << 2 << endl;
      else if(n == 2) cout << 1 << endl;
      else if(n == 3) cout << 1 << endl;
      else if(n == 4) cout << 2 << endl;
      else if(n%3 == 0) cout << n/3 << endl;
      else if(n%3 == 1) cout << n/3 + 1 << endl;
      else if(n%3 == 2) cout << n/3 + 1 << endl;
      }
  return 0;
}
