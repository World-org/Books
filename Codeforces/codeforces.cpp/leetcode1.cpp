#include<iostream>
using namespace std;

int main(){
        int salary[];
        int n = salary.size();
        int min = *min_element(salary, salary + n);
        int max = *max_element(salary, salary + n);
        for(int i=0;i<salary.size();i++){
            int sum += salary[i];
        }
        cout<<(sum - min - max)/(n-2);
}
