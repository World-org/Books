/*In order to write a string, Atilla needs to first learn all letters that are contained in the string.

Atilla needs to write a message which can be represented as a string s. He asks you what is the minimum alphabet size required so that one can write this message.

The alphabet of size x (1≤x≤26) contains only the first x Latin letters. For example an alphabet of size 4 contains only the characters a, b, c and d.
*/

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
    cin>>n;

        string s;
        cin>>s;
        int a[26]={0};
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        for(int i=25;i>=0;i--){
            if(a[i]>0){
                cout<<i+1<<endl;
                break;
            }
        }


    }
    return 0;
}

