#include <bits/stdc++.h>

using namespace std;

int second_large(int a[], int n) {

    if(n < 2) return -1;

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(a[i] >= largest) {
            second_largest = largest;
            largest = a[i];
        } else if(second_largest < a[i] and a[i] != largest) {
            second_largest = a[i];
        }
    } 
    return second_largest;
}

int second_small(int a[], int n) {
    
    if(n < 2) return -1;

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(a[i] <= smallest) {
            second_smallest = smallest;
            smallest = a[i];
        } else if(second_smallest > a[i] and a[i] != smallest) {
            second_smallest = a[i];
        }
    }

    return second_smallest;
}

int main() {

    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int second_largest = second_large(a, n);
    int second_smallest = second_small(a, n);

    cout << second_smallest << " " << second_largest << endl;

    return 0;
}
