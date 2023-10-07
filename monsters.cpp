#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> res;
        map<int,vector<int>,greater<int>> mp;
        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            if(temp%k==0){
                res.push_back(i);
            }
            else{
                mp[temp%k].push_back(i);
            }
            
        }
        for(auto x :mp){
            for(auto y :x.second){
                res.push_back(y);
            }
        
        }
        for(auto x:res){
            cout<<x<<" ";
        }
        cout<<endl;
        
    }


    return 0;
}