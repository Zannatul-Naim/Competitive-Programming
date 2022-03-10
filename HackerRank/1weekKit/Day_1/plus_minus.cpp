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
    int cnt_zero = 0, cnt_minus = 0, cnt_plus = 0;
    //vector<int>v[n];
    for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	if(x == 0) cnt_zero++;
    	else if(x < 0) cnt_minus++;
    	else cnt_plus++;
    }

    cout << setprecision(6) << (cnt_plus * 1.0) / n << endl;
    cout << setprecision(6) << (cnt_minus * 1.0) / n << endl;
    cout << setprecision(6) << (cnt_zero * 1.0) / n << endl;
    
	return 0;
} 
