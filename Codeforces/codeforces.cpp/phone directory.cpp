#include<bits/stdc++.h>
#define ll long long 
 using namespace std;

 class phonedirectory{
 public:
 set<ll int>s ;
 void insert_num(ll int num){
 s.insert(num);
 }
 bool check(ll int num){
     set<ll int> :: iterator itr = s.find(num) ;
     if(*itr >= 0 && *itr < s.size() ){
         return true;
     }
     return false ;
 }
 void release_num(){
 if(s.empty() == 1){
     cout<<"No numbers in slots"<<endl;
 }

 else{
      vector<ll int> :: iterator itr=v.begin();
      auto it = itr ;
      cout<<" New Number "<<*it<<endl;
 //s.erase(itr);
 }
 }

 };

 int main(){
     
         phonedirectory phone_num;
         ll int num_of_slot, number, mob_num ;
         cin >> num_of_slot ;
         for(int i=0; i < num_of_slot ;i++){
             cin>>number ;
         phone_num.insert_num(number);
         }
         
 cout<<"if you want new number please Enter 'X' else 'N'  " <<endl;
 char new_num;
 cin>>new_num ;
 if(new_num == 'X'){

     phone_num.release_num();
 }
 char to_check;
 cout<<"if you want to check number please Enter 'Y' else 'N' " <<endl;
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
