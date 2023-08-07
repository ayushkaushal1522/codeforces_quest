#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if (str.size() % 2) {
            str.erase(str.begin() + str.size() / 2);
        }
        if (str != std::string(str.size(), str[0])) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}