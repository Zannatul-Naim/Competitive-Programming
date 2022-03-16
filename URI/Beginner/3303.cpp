#include <iostream>
 
using namespace std;
 
int main() {
 
  string str;
  cin >> str;
  if(str.length() >= 10)
    cout << "palavrao" << "\n";
  else
    cout << "palavrinha" << "\n";
 
    return 0;
}
