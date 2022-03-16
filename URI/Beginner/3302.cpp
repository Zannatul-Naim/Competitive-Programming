#include <iostream>
 
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    int i = 1;
    while(t--)
    {
        int n;
        cin >> n;
        cout << "resposta " << i << ": " << n << "\n";
        i++;
    }
 
    return 0;
}
