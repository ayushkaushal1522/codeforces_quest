#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n = str.length();
        char prev='0';
        for(int i=0;i<n;i++){
            if(str[i]=='?') str[i]=prev;
            else prev=str[i];
        }
        cout<<str<<endl;
    }




    return 0;
}