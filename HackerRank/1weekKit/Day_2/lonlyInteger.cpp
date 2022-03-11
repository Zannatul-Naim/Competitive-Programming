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
   int a[n];
   for(int i = 0; i < n; i++) {
           cin >> a[i];
   }
   sort(a, a+n);
   for(int i = 0; i < n; i += 2)
   {
       if(a[i] == a[i+1]) continue;
       else {
           cout << a[i] << endl;
           break;
       }
   }
    
    return 0;
} 
