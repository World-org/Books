#include<iostream>
using namespace std;
 int main(){
     int N, i, j, NofSF=0, NofFS=0;
     string s;
     cin>>N;
     cout<<endl;
     cin>>s;
     for(i=0;i<N-1;i++){
        if(s[i]=='S' && s[i+1]=='F'){
            NofSF++;
        }
     }
     for(j=0;j<N-1;j++){
        if(s[j]=='F' && s[j+1]=='S'){
            NofFS++;
        }
     }
     if(NofSF>NofFS){
        cout<<"YES";
     }
     else if(NofSF<=NofFS){
        cout<<"NO";
     }
     return 0;
 }
