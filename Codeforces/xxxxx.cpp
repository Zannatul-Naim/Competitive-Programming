#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"
#define input cin >>
#define output cout <<
#define pb push_back

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int gcd(int a, int b) {
	return b==0? a : gcd(b, a%b);
}

int lcm(int a, int b) {
	return (a * (b / gcd(a, b)));
}

bool isPrime(int n) {  // A number is Prime number or not.
	if(n < 2) return false;
	for(int i = 2; i*i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

long long int factorial(int n) {
	return n * factorial(n-1);
}
void solve() {

	ll n, x;
	cin >> n >> x;

	ll sum = 0, l = -1, r = 0, c = 0;

	for(ll i = 0; i < n; i++) {

		ll f;
		cin >> f;

		if(f%x) {
			if(l == -1) l = i;
			r = i;
		} else if(f%x == 0) c++;

		sum += f;
	}

	if(sum % x) cout << n << endl;
	else if(c == n) cout << -1 << endl;
	else {
		cout << n - min(l+1, n-r) << endl;
	}

}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while(t--) {
	  solve();
	}

	return 0;
}
