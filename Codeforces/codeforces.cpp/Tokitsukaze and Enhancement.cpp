#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x%4==1){
        cout<<0<<" ";
        cout<<'A';
    }
    else if(x%4==3){
        cout<<2<<" ";
        cout<<'C';
    }
    else if(x%4==2){
        cout<<1<<" ";
        cout<<'B';
    }

}
