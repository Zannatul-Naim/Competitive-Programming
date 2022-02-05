#include <iostream>

using namespace std;

int main() {

  while(1)
  {
      int a,b;
      cin>>a>>b;
      if(a==b)
      break;
      else if(a>b)
      cout<<"Decrescente"<<"\n";
      else if(a<b)
      cout<<"Crescente"<<"\n";
  }

    return 0;
}
