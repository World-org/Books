#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
          int a,b, jumps;
          cin>>a>>b;
          if(b%a!=0 || (a==1 && b==1) || (a==1 && b==2) || (a==2 && b==1)){
            cout<<1;
            jumps=1;
          }
          else if(b%a==0 || a%b==0){
             cout<<2;
             jumps=2;
          }
          else(cout<<0);

          if(jumps==1){
            cout<<a<<" "<<b;
          }
          else if(jumps==2){
            cout<<a<<" "<<b;
            cout<<a<<" "<<b;
          }
          else(cout<<0<<" "<<0);


    }



}
