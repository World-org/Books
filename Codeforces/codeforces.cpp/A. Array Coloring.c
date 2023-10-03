#include<stdio.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(i:arr){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }
        if(sum%2==0) return Yes;
        else{return No;}
    }
}
