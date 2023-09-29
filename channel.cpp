#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 
    int t;
    cin>>t;
    while(t--){;
        ll subs,online,notif,read = 0, f = 0;
        cin>>subs>>online>>notif;
        string s;
        cin>>s;
        if(subs == online) {
            cout<<"YES"<<endl;
            continue;
        }
        read = online;
        for(ll i = 0 ; i < notif ; i++) {
            if(s[i] == '+') {
                read++;
                online++;
            }
            else {
                read--;
            }
            if(read == subs) {
                f=1;
                break;
            }
        }
        if(f == 1) {
            cout<<"YES";
        }
        else {
            if(online >= subs) {
                cout<<"MAYBE";
            }
            else
                cout<<"NO";
        }
        cout<<endl;
    }       
    return 0;
}