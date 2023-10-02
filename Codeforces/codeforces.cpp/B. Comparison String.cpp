#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a[n+1];
        a[0]=1;
        for(int i=0;i<n;i++){
            if(s[i]=='<'){
                a[i+1]=a[i]+1;
            }
            else{
                a[i+1]=a[i]-1;
            }

        }
        sort(a,a+n+1);
        int ans=1;
        for(int j=0; j<n; j++){
            if(a[j]!=a[j+1]){
                ans++;
            }
        }
        cout<<ans<<endl;


    }
    return 0;
}
