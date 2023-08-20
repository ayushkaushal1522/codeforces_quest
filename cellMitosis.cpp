#include<bits/stdc++.h>
using namespace std;
long long int cellproblem(int n, int x , int y , int z){
    //bottom up approach
    vector<int> dp(n+1, 0);
    dp[0] = 0;
    dp[1] = 0;
    for(int i=2;i<=n;i++){
        if(i%2==0){
            dp[i] = min(dp[i/2] + x, dp[i-1] + y);
        }
        else{
            dp[i] = min(dp[i-1] + y , dp[(i+1)/2] + x + z);
        }
    }
    return  dp[n];
}
int main(){

    int n,x,y,z;
    cin>>n>>x>>y>>z;
    cout<<cellproblem(n,x,y,z)<<endl;


    return 0;
}