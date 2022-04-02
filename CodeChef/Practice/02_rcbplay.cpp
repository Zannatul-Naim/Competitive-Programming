#include <iostream>

using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--) {
       int x, y, z;
       cin >> x >> y >> z;
       if(z*2 >= (y-x)) cout << "Yes" << endl;
       else cout << "No" << endl;
   }
   
   return 0;
}
