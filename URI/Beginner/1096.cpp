#include <iostream>
 
using namespace std;
 
int main() {
    int i=1,j=7;
    for(i=1;i<=9;i+=2)
    {
        for(j=7;j>=5;j--)
        {
            cout<<"I="<<i<<" "<<"J="<<j<<"\n";
        }
    }
    return 0;
}
