#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int maxT, maxN, sumN;
	    cin >> maxT >> maxN >> sumN;
	    long long ans = 0;
	    while(maxT > 0  && sumN != 0 ) {
	        
	        if(sumN >= maxN) {
	            ans += maxN*maxN;
	            sumN = sumN-maxN;
	            
	        }
	        else {
	            
	            ans += sumN*sumN;
	            sumN = 0;
	        }
	        maxT--;
	    }
	    cout << ans << endl;
	}
	return 0;
}
