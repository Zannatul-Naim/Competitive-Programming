#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
const int N = 2e5 + 1;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

bool isValid(string s) {

	stack<char> st;

	st.push(s[0]);

	for(int i = 1; i < s.size(); i++) {
		if(!st.empty() and (st.top() == '(' and s[i] == ')')) st.pop();
		else st.push(s[i]); 
	}

	if(st.empty()) return true;
	else return false;

}

void solve() {

	int w, d, h;
	cin >> w >> d >> h;

	int a, b, f, g;
	cin >> a >> b >> f >> g;

	int ans1 = h;
	int ans2 = h;
	int ans3 = h;
	int ans4 = h;
	int b1 = d, b2 = 0, a1 = w, a2 = 0;

	ans1 += (d-b);
	ans1 += (d - g);
	ans1 += abs(a - f);

	ans2 += b;
	ans2 += g;
	ans2 += abs(a - f);

	ans3 += a;
	ans3 += f;
	ans3 += abs(b - g);

	ans4 += (w-a);
	ans4 += (w-f);
	ans4 += abs(b-g);

	cout << min({ans1, ans2, ans3, ans4}) << endl;
    
}

int main()
{
	fastIO();

	int t = 1;
	cin >> t;

	while (t--) {
        solve();
    }

	return 0;
}
