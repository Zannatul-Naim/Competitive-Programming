#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

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

ll pow(int a, int n) {
	if(n == 0) return 1;
	if(n == 1) return a;
	ll t = pow(a, n/2);
	return t*t*pow(a, n%2);
}

bool checkIsDistinct(int n) {
  int digit = log10(n) + 1;
  set<int>s;
  while(n) {
    s.insert(n%10);
    n /= 10;
  }
  if(s.size() == digit) return true;
  else return false;
}

void solve() {
  
  ll a, b, n;
  cin >> a >> b >> n;
  int i = 1;
  while((a+b) <= n) {
    if(a > b) b += a;
    else a += b;
    i++;
  }
  cout << i << endl;
  
}

int main()
{
	fastIO();

	// freopen("input.txt", 'r');
	// freopen("output.txt", 'w');

	int t;
	int left = 0, right = 0;
	
	cin >> t;
	while(t--) {
	  solve();
	}
	return 0;
}
