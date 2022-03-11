#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

   int n;
   cin >> n;
   int a[n] = {0};
   int max = 0;
   for(int i = 0; i < n; i++)
   {
       int x;
       cin >> x;
       if(x > max) max = x;
       a[x]++;
   }
   for(int i = 0; i <= max; i++) {
       cout << a[i] << " ";
   }
   cout << "\n";
    
    return 0;
} 
