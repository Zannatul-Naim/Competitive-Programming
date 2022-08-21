#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            int a=max(arr[i],arr[i+1]);
            int b=min(arr[i],arr[i+1]);
            while(a>2*b){
                b=b*2;
                count++;
            }
        }
       cout<<count<<endl;
    }
}
