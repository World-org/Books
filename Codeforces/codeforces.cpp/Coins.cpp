#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n,k,x=0,y=0;
     cin>>n>>k;
     for(int i=0;i<=n/2;i++){
        for(int j=0;j<=n/k;j++){
        if(2*i + k*j == n){
        cout<<"YES";
        break;
        }

        if(2*i + k*j != n){
            cout<<"NO";
            break;
        }
      }
     }
    }

    return 0;
}
