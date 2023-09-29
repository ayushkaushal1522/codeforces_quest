#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n =str.length();
        if(str=="()"){
            cout<<"NO"<<endl;
            continue;
        }
        int i=0;
        bool flag = false;
        while(i<n-1){
            if(str.substr(i,2)==")("){
                flag=true;
                break;
            }
            i++;
        }
        string ans="";
        if(flag){
            for(int i=0;i<n;i++){
                ans+="(";
            }
            for(int i=0;i<n;i++){
                ans+=")";
            }
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                ans+="()";
            }
            if(ans==str){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
                cout<<ans<<endl;
            }
        }
    }

    

    return 0;
}