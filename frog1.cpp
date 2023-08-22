#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &arr ,int n){
    
    vector<int> dp(n,0);
    dp[0] = 0;
    for(int i=1;i<n;i++){
        int op1 = abs(arr[i] - arr[i-1]) + dp[i-1];
        int op2 = 1e9;
        if(i>=2) op2 = abs(arr[i] - arr[i-2]) + dp[i-2];
        dp[i] = min(op1,op2);
    }
    return dp[n-1];


}
int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<func(arr ,n)<<endl;


    return 0;
}