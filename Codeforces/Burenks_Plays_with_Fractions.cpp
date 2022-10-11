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

template<class T>
void swap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
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
  
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  
  if(a*d == b*c) cout << 0 << endl;
  else if(a == 0 || c == 0) cout << 1 << endl;
  else {
    if((a*d > b*c) && (a*d)%(b*c) == 0) cout << 1 << endl;
    else if((a*d < b*c) && (b*c)%(a*d) == 0) cout << 1 << endl;
    else cout << 2 << endl;
  }
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
