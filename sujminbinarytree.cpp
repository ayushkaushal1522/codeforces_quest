#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t;
    cin>>t;
    
    while(t--){
        long long int n;
        long long int res = 1;
        cin>>n;
        while(n!=1){
            res+=n;
            n/=2;
        }
        cout<<res<<endl;
    }
   


    return 0;
}