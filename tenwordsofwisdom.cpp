#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi=INT_MIN;
        int ans = 0;
        for(int i=1;i<=n;i++){
            int a,b;
            cin>>a>>b;
            if(b>maxi && a<=10){
                ans = i;
                maxi = b;
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}