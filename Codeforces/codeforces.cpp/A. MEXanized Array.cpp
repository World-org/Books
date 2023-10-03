#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        ll sum = 0;

        if (k > n || k - 1 > x) {
            cout << -1 << endl; // Print -1 when conditions are not met
        }
        else {
            for (int i = 1; i < k; i++) {
                sum+=i;
            }
            if(k>=x){
                for (int j = 0; j < n - k; j++) {
                sum+= (k-1);
                }
            }
            else{
                for (int l = 0; l < n-k; l++) {
                sum += x;
            }
            }
            cout << sum  << endl; // Corrected to add 'n' to the sum
        }
    }
    return 0;
}
