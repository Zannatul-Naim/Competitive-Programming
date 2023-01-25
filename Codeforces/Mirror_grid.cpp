#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--) {
		
		int n;
		cin >> n;
		
		int a[n][n];
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				char ch;
				cin >> ch;
				
				a[i][j] = ch - '0';
			}
		}
		
		int ans = 0;
		
		for(int i = 0; i < (n+1)/2; i++) {
			for(int j = 0; j < n/2; j++) {
				int temp = a[i][j] + a[n-1-j][i] + a[j][n-1-i] + a[n-1-i][n-1-j];
				ans += min(temp, 4-temp);
			}
		}
		
		cout << ans << endl;
		
	}

	return 0;
}
