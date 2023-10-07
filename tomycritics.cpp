#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b>=10) {cout<<"YES"<<endl;continue;}
        if(a+c>=10) {cout<<"YES"<<endl;continue;}
        if(b+c>=10) {cout<<"YES"<<endl;continue;}
        cout<<"NO"<<endl;
    }



    return 0;
}