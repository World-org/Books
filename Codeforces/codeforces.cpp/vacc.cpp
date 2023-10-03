#include<bits/stdc++.h>
using namespace std;

int main() {

        int N,D;
        cin>>N>>D>>[&n&];
        int count1=0;
        int count2=0;
        int a[N];
        for(int i=1;i<=N;i++){
            cin>>a[i];
        }
        for(int j=1; j<=N; j++){
            if (a[j]>=80 || a[j]<=9){
                count1++;
            }
            else {
                count2++;
            }
        }
        float f1=count1/D;
        int m1=count1/D;
        int count11=0;
        int count22=0;

        float f2=count2/D;
        int m2=count2/D;
        if(f1>m1){
            count11++;
        }
        if(f2>m2){
            count22++;
        }
        int a1=count1+count11;
        int a2=count2+count22;
        int k1=a1/D;
        int k2=a2/D;
        if(a1%D!=0 && a2%D!=0){
            cout<<k1+k2+2<<endl;
        }
        if(a1%D==0 && a2%D!=0){
            cout<<k1+k2+1<<endl;
        }
        if(a1%D==0 && a2%D==0){
            cout<<k1+k2<<endl;
        }
        if(a1%D!=0 && a2%D==0){
            cout<<k1+k2+1<<endl;
        }

    return 0;
}

