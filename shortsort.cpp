#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int flag=0;
        if(str[0]=='a' || str[1]=='b' || str[2]=='c') flag=1;
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}