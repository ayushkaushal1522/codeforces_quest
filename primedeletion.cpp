#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;
    while(t--){
        string str;
        string ans;
        cin>>str;
        for(int i=0;i<9;i++){
            if(str[i]=='1'){
                ans+='1';
            }
            else if(str[i]=='3'){
                ans+='3';
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}