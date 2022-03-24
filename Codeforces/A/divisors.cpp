#include<bits/stdc++.h>
using namespace std;

void divisor(long int k) {
	for(int i = 1; i <= k; i++) {
		if(k % i == 0) {
			cout << i << " ";
		}

	}
	cout << "\n";
}

#define ll long long
int main()
{

	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

   int n;
   cin >> n;
   while(n--){
   	long int k;
   	cin >> k;
   	divisor(k);
   }
    
	return 0;
} 
