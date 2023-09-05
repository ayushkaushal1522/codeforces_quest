//At atcoder if you got AC means all correct then only you code will be considered
// to be a correct one otherwise not.
// 2 ke power 32 ke liye toh long long use karna pdega he uske bina toh 
// kaam banega he nahi boss.
// the main task is to form a recurrence baaki toh recursion saambhal 
// lega he yaar.
#include<bits/stdc++.h>
using namespace std;
long long int mod = 1e8;
vector<int> tree[100001];
long long int dp[100001][2];

long long int solve(int src , bool color , int parent){
    if(dp[src][color]!=-1) return dp[src][color];
    long long int ans = 0;
    long long int wt = 1;
    for(int child : tree[src]){
        if(child!= parent){
            wt = (wt*solve(child,0,src)) %mod;
        }
        
    }
    ans+=wt;
    if(!color){
        long long int wt2 = 1;
        for(int child : tree[src]){
            if(child!= parent){
                wt2 = (wt2*solve(child,1,src)) %mod;
            }
        }
        ans = (ans+wt2)%mod;
    }
    return dp[src][color] = ans;

}
int main(){

    int n;
    cin>>n;
    memset(dp , -1 , sizeof dp);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
        
    }
    cout<<solve(1,0,-1)<<endl;



    return 0;
} 