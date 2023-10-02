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
        int ind, wid;
        for(int i=0;i<n;i++){
            if(s[i]=='>' || s[i]=='<'){
                cout<<n+1;
            }
            else if((s[i]=='<' && s[i+1]=='>') || (s[i]=='>' && s[i+1]=='<')){
                cout<<2;
            }
        }
        for(int j=0;j<n;j++){
            if(s[i]=='<' && s[i+1]=='>'){
                    ind=i;
            }
            else if(s[i]=='>' && s[i+1]=='<'){
                    wid=i;
            }
        }
        for(int k=i;k<n;k++){

        }


    }
    return 0;
}
