#include<bits/stdc++.h>
using namespace std;
struct item{
    int weight;
    int value;
};
long long int func(vector<item> &arr , int n , int w){
    int maxvalue = n*1000;
    int dp[n+1][maxvalue+1];

    for(int i=0;i<=maxvalue;i++) dp[1][i] = 1e8;
        
    dp[1][0] = 0;
    dp[1][arr[1].value] = arr[1].weight;
        for(int j=2;j<=n;j++){
            for(int k=0;k<=maxvalue;k++){
                dp[j][k] = dp[j-1][k];
                if(arr[j].value>k) continue;
                dp[j][k] = min(dp[j][k] , arr[j].weight + dp[j-1][k-arr[j].value]);
            }
        }
        


    
    long long int  ans =0;
    for(int x=0;x<=maxvalue;x++){
        if(dp[n][x]<=w) ans = x;
        
    }
    return ans;

}
int main(){

    int n,w;
    cin>>n>>w;
    vector<item> arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i].weight>>arr[i].value;;
        
    }
    cout<<func(arr,n,w)<<endl;


    return 0;
}