#include <iostream>
#include <string>

using namespace std;

string decryptString(string s) {
    string result = "";

    for (int i = 0; i < s.length(); i += 2) {
        result += s[i];
    }

    return result;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
    cout << "Enter the encrypted string: ";
    cin >> s;

    string decryptedString = decryptString(s);
    cout << "Decrypted string: " << decryptedString << endl;

    return 0;
    }
}
