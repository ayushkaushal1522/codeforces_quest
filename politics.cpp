#include<bits/stdc++.h>
using namespace std;
int main(){
    // we can't change the opinion of someone ham toh  bass expell kar sakte hein.
    int t;
    cin>>t;
    while(t--){
        int n,m;             
        cin>>n>>m;
        string s[n];
    
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
    
        int ans=1;
        for(int i=1;i<n;i++){
            ans+=(s[i]==s[0]);
        }
    
        cout<<ans<<endl;
    }
    return 0;
}