#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int total = 0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            total+=temp;
        }
        if(total&1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }



    return 0;
}