#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int pos=0;
        int neg=0;
        int ans=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp<0) neg++;
            else pos++;
        }
        if(neg%2!=0){
            neg--;
            pos++;
            ans++;
        }
        while(neg>pos){
            neg-=2;
            pos+=2;
            ans+=2;
        }
        cout<<ans<<endl;
    }








    return 0;
}