#include <iostream>
 
using namespace std;
 
int main() {
 
 int n,cnt = 0;
 for(int i = 0;i < 5; i++)
 {
     cin >> n;
     if(n%2 == 0)
     {
         cnt++;
     }
 }
 cout << cnt << " valores pares"<<"\n";
    return 0;
}
