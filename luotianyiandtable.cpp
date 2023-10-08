#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long int  n,m,large,small,sec_small,ans=0,b,sec_large,ans1=0;
        cin>>n>>m;
        
        vector < long long int  > v;
        for(long long int  i = 0 ; i < (n*m) ; i++) {
            cin>>b;
            v.push_back(b);
        }
        sort(v.begin(),v.end());
     
        large = v[(n*m)-1];
        sec_large = v[(n*m)-2];
        small = v[0];
        sec_small = v[1];
       
        if(n>m) {
            ans = (large-small)*(n-1)*m;
            ans += (large-sec_small)*(m-1);
            
            ans1 = (large-small)*(n-1)*m;
            ans1 += (sec_large-small)*(m-1); 
        }
        else {
            ans1 = (large-small)*(m-1)*n;
            ans1 += (large-sec_small)*(n-1); 
            
            ans = (large-small)*(m-1)*n;
            ans += (sec_large-small)*(n-1);
        }
        ans = max(ans,ans1);
        cout<<ans<<endl;
    }







    return 0;
}