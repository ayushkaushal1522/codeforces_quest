#include<bits/stdc++.h>
using namespace std;
struct item{
    int weight;
    int value;
};

long long int func(vector<item> &arr , int n , int w){
    vector<vector<long long int>> dp(n,vector<long long int>(w+1,0));
    dp[0][arr[0].weight] =arr[0].value;

    for(int i=1;i<n;i++){
        for(int j=0;j<=w;j++){
            dp[i][j] = dp[i-1][j];
            if(arr[i].weight>j) continue;
            dp[i][j] = max(dp[i][j] , arr[i].value + dp[i-1][j-arr[i].weight]);
        }
    }

    long long int  maxi = LONG_MIN;
    for(int i=0;i<=w;i++){
        maxi=max(maxi,dp[n-1][i]);
    }
    return maxi;


}


int main(){

    int n,w;
    cin>>n>>w;
    vector<item> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].weight;
        cin>>arr[i].value;
    }
    cout<<func(arr,n,w)<<endl;

    return 0;
}