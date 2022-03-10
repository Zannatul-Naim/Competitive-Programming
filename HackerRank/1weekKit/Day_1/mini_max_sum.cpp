#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int a[5];
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    sort(a, a + 5);
    int x = 4;
    long long sum_min = 0, sum_max = 0;
    for(int i = 0; i < 4; i++) {
        sum_min += a[i];
        sum_max += a[x--];
    }
    cout << sum_min << " " << sum_max << endl;
    
    return 0;
} 
