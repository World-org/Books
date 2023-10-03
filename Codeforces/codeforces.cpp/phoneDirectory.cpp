#include<bits/stdc++.h>
#define ll long long 
using namespace std;

 class phonedirectory{
 public:

 vector<ll> v;
    for(int i=0 ; i<n ; i++)
    {
        cin>>num;
        v.push_back(num);
    }
 bool check(ll num){

     for(int i=0; i < v.size(); i++){
         if(v[i]==num){
         return true;
         }
         return false ;
         }
}
 void release_num(){
 if(v.empty() == 1){
     cout<<"No numbers in slots"<<endl;
 }

 else{
      vector<ll> :: iterator it;
      auto it = itr ;
      cout<<" New Number "<<*it<<endl;
 v.erase(itr);
 }
 }

 };

 int main(){
     
         phonedirectory phone_num;
         ll int num_of_slots, number, mob_num ;
         cin >> num_of_slot ;
         for(int i=0; i < num_of_slots ;i++){
             cin>>number ;
         phone_num.insert_num(number);
         }
         
 cout<<"For new number please Enter 'X' else 'N'  " <<endl;
 char new_num;
 cin>>new_num ;
 if(new_num == 'X'){

     phone_num.release_num();
 }
 char to_check;
 cout<<"To check number please Enter 'Y' else 'N' " <<endl;
 cin>>to_check ;

 if(to_check == 'Y'){
     cout<<"Enter Number to Check "<<endl;
     cin>>mob_num ;
     if(phone_num.check(mob_num)){
         cout<<"Number is present in slots"<<endl;
     }
     else{
         cout<<"Number is not present in slots"<<endl;

     }
 }
     
     return 0;
 }
