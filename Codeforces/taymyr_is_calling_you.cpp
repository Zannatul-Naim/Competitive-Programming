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


void solve() {
  
  int n, m, z;
  cin >> n >> m >> z;
  
  int x = lcm(n, m);
  
  cout << z / x << endl;
  
}

int main()
{
	fastIO();

	solve();

	return 0;
}
