#include <iostream>
using namespace std;
int main() {
  long long int n;
  cin >> n;
  if(n <= 5)
  cout << "1" << "\n";
  else if(n % 5 == 0)
  cout << (n / 5) << "\n";
  else
  cout << (n / 5 + 1) << "\n";
  return 0;
}
