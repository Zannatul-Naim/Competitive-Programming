#include<bits/stdc++.h>
#include<sstream>
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
  
  ll n;
  cin >> n;
  
  // vector < int > v;
  ll ans = 1;
  
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    
    ans *= x;
  }
  
  cout << 2022*(ans + (n-1)) << endl;
  
}

int main()
{
	fastIO();

	int t;
	cin >> t;

	while(t--) {
	  solve();
	}
// 	solve();

	return 0;
}
