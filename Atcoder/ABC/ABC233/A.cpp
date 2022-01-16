#include <iostream>
#include<cmath>
using namespace std;
 
int main()
{
   int x,y;
   cin >> x >> y;
   if(y > x)
   {
       int f = y - x;
       double n = (f*1.0) / 10;
       int ans = ceil(n);
       cout << ans << endl;
   }