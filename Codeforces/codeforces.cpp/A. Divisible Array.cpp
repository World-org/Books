#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<endl;
        int arr[n];
        if(n%2==0){
            for(int i=0;i<n;i++){
            arr[i]=((i+1)*2);

            }
            for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
            }
        }
        else if(n%2!=0){
               for(int i=0;i<n;i++){
            arr[i]=((i+1));

               }
               for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
               }
        }


    }
}
