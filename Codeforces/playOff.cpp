#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

   int t;
   cin >> t;
   while(t--)
   {
   	int n;
   	cin >> n;
   	int ans = pow(2, n) - 1;
   	cout << ans << endl;
   }
    
	return 0;
} 
