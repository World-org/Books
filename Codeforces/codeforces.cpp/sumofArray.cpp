#include<iostream>
using namespace std;

int main(){
int i,n;
cin >> n;
int arr[n];
int sum=0;
for(i=0;i<n;i++){
    cin >> arr[i];
    sum += arr[i];
}
cout << sum;
return 0;
}
