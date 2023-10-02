#include<iostream>
using namespace std;

int main(){
    int N,i,j;
    string s;
    cin>>N;
    cout<<endl;
    cin>>s;
    int num_of_z=0;
    int num_of_n=0;

    for(i=0;i<N;i++){
        if(s[i]=='z'){
            num_of_z++;
        }
    }
    for(j=0;j<N;j++){
        if(s[j]=='n'){
            num_of_n++;
        }
    }
    while(num_of_n--){
        cout<<1<<' ';
    }
    while(num_of_z--){
        cout<<0<<' ';
    }
 return 0;
}
