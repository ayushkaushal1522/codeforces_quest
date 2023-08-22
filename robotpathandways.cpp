#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int func(int m , int n){

    if(dp[0][0]==-1) return 0;

    for(int j=0;j<n;j++){
        if(dp[0][j]==-1) break;
        dp[0][j] = 1;
    }

    for(int i=0;i<m;i++){
        if(dp[i][0]==-1) break;
        dp[i][0] = 1;
    }

    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(dp[i][j] == -1) continue;
            dp[i][j] = 0;

            if(dp[i][j-1]!=-1){
                dp[i][j] = dp[i][j-1];
            }
            if(dp[i-1][j]!=-1){
                dp[i][j] = dp[i][j] + dp[i-1][j];
            }

        }
    }

    if(dp[m-1][n-1]==-1) return 0;
    return dp[m-1][n-1];
    //my name is Ayush kaushal 



}

int main(){

    memset(dp,0,sizeof dp);

    int m,n,p;
    cin>>m>>n>>p;

    for(int i=0;i<p;i++){
        int x,y;
        cin>>x>>y;
        dp[x-1][y-1] = -1;
    }

    cout<<func(m,n)<<endl;





    return 0;
}