#include <iostream>
#include<math.h>
using namespace std;

int dec(long long k, string str) {
    int ans = 0;
    for(char ch : str)
    {
        ans = ans * k;
        ans = ans + ch - '0';
    }
    return ans;
}

int main()
{
   long long k;
   cin >> k;
   string a, b;
   cin >> a >> b;
   long long x = dec(k, a);
   
   long long y = dec(k, b);
   
   cout << x * y << endl;
   
   return 0;
}