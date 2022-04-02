#include <iostream>

using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--) {
       int n, x, p;
       cin >> n >> x >> p;
       int ans = x*3 - (n-x);
       if(ans >= p) cout << "PASS" << endl;
       else cout << "FAIL" << endl;
   }
   
   return 0;
}
