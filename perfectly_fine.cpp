#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=INT_MAX;
        int b=INT_MAX;
        int c=INT_MAX;
        for(int i=0;i<n;i++){
            int tm;
            cin>>tm;
            string temp;
            cin>>temp;
            if(temp[0]=='1' && temp[1]=='1'){
                c=min(c,tm);
            }
            else if(temp[0]=='1'){
                a=min(a,tm);
            }
            else if(temp[1]=='1'){
                b=min(b,tm);
            }
        }
            if((a==INT_MAX || b==INT_MAX) && c==INT_MAX){
                cout<<-1<<endl;
                continue;
            }
            else if((a==INT_MAX || b==INT_MAX) && c!=INT_MAX){
                cout<<c<<endl;
                continue;
            }
            int ans=min(a+b,c);
            cout<<ans<<endl;
    }



    return 0;
}