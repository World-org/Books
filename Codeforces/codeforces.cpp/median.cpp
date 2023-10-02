/*Given three distinct integers a, b, and c, find the medium number between all of them.

The medium number is the number that is neither the minimum nor the maximum of the given three numbers.

For example, the median of 5,2,6 is 5, since the minimum is 2 and the maximum is 6.
*/

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int a,b,c;
        cin>>a>>b>>c;
        int maxi = max(a,max(b,c));
        int mini = min(a,min(b,c));
        if(a!=maxi && a!=mini) cout<<a<<endl;
        else if(b!=maxi && b!=mini) cout<<b<<endl;
        else if(c!=maxi && c!=mini) cout<<c<<endl;
        /*if(a>=b){
            if(b>=c){
                cout<<b<<endl;
            }
            else if(c>=b){
                cout<<c<<endl;
            }
        }
        else if(b>=a){
                if(a>=c){
                     cout<<a<<endl;
                }
                else if(a<=c){
                     cout<<c<<endl;
                }

        }
        else{
            cout<<c<<endl;
        }*/
    }
    return 0;
}
