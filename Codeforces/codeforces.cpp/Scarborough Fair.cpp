#include<iostream>
using namespace std;

int main(){
    int n, m, l, r, i, j;
    char c1, c2;
    cin>>n>>m;
    cout<<endl;
    string s;
    cin>>s;
    cout<<endl;
    for(i=1;i<=m;i++){
        cin>>l>>r>>c1>>c2;
        for(j=l-1;j<=r-1;j++){
            if(s[j]==c1){
               s[j]=c2;
            }
        }
    }
    cout<<s;
}

