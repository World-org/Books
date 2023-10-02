#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    string a, b, c;
    cin>>a;
    cin>>b;
    int i;
    int flag = 1;
    reverse(b.begin(), b.end());
    c = a + (b);
    for(i=0;i<=n+m-3;i++){
        if(c[i] == c[i+1] && c[i+1] == c[i+2]){
            flag = 0;
            break;
        }
    }
    if(flag == 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }

    return 0;
}
