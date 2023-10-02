#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a[n], b[n];
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int j=0; j<n; j++){
            if(a[j]<a[j+1]){
                cout<<a[j]<<" ";
            }
            else{
                sort(a, a + n);
            }
        }
        cout<<a[n]<<" ";
        cout<<endl;
    }
    return 0;
}
