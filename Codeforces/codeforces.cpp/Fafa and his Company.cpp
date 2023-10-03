#include<iostream>
using namespace std;

int main(){
    int N, i, No_of_factor=0;
    cin>>N;
    for(i=1;i<=N;i++){
        if(N%i==0){
            No_of_factor++;
        }
    }
    cout<<No_of_factor-1;
}
