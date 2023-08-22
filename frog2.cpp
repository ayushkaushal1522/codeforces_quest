#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr , int n ,int k){

    vector<int> dp(n+1);
    dp[0]=0;
    for(int i=1;i<n;i++){
        dp[i] = 1e9;
        for(int j=i-1;j>=0 && (i-j)<=k ; j--){
            dp[i] = min(dp[i] , abs(arr[i] - arr[j]) + dp[j]);
        }
    }
    return dp[n-1];


}


int main(){


    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<func(arr,n,k)<<endl;

    return 0;
}