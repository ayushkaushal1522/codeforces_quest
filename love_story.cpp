#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int ans=0;
        string temp="codeforces";
        for(int i=0;i<10;i++){
            if(str[i]!=temp[i]) ans++;
        }
        cout<<ans<<endl;
    }





    return 0;
}
