#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
           int a, b,  c, d, k, num1, num2;
           cin>>a>>b>>c>>d>>k;

           if(a>c){
               //cout<<a;
               num1 = a;
           }
           else if(a<=c){
               //cout<<1;
               num1 = 1;
           }
           if(b>d){
               //cout<<b;
               num2 = b;
           }
           else if(b<=d){
               //cout<<1;
               num2 = 1;
           }
           if((num1+num2) <=k){
            cout<<(a+1);
           }
           else(cout<<-1);
           if((num2+num2)<=k){
            cout<<(b+1);
           }
           else(cout<<-1);

    }
    return 0;
}
