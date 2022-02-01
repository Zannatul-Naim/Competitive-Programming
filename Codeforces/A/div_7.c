#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n % 7 == 0){
            cout << n << "\n";
        }
        else {
            int x = n - (n % 10) + 9;
            n = x - (x % 7);
            cout << n << "\n";
        }
    }
    return 0;
}
