#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n = a.length();
        int flag= 0 ;
        for(int i=0;i<n-1;i++){
            if((a[i]=='0' && b[i]=='0') && (a[i+1]=='1' && b[i+1]=='1')){
                flag=1;
                break;
            }

        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}