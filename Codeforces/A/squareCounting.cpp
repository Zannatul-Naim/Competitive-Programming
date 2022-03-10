#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n, a;
		cin >> n >> a;
		ll ans = a / (n * n);		
		cout << ans << endl;
	}
	return 0;
} 
