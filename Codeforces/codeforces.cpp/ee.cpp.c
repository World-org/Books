#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m,i =0,j= 0;
    cin>>n;
    cin>>m;
    int a[n];
    int b[m];
    //cin>>a[n];
    for(int i=0; i<n; i++){
    cin>>a[i];
}
    //cin>>b[m];
    for(int j=0; i<m; j++){
    cin>>b[i];
}
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    while(m<=n){
        a[i] = b[m-i+1];
        i++;
    }
    int sum = 0;
    sum = accumulate(a, a+n, sum);
    cout<<sum;
   //cout << accumulate(a, a + n, 0);

}
    return 0;
}
