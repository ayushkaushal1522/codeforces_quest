//lag raha hai ke ismein prev wala contain karke chalna padega or i say maintan karna padega.
#include<bits/stdc++.h>
using namespace std;
struct activity{
    int a,b,c;
};

int func(vector<activity> &arr , int n){
    int dp[n][3];
    dp[0][0] =arr[0].a;
    dp[0][1] =arr[0].b;
    dp[0][2] =arr[0].c;

    for(int i=1;i<n;i++){
        dp[i][0] = arr[i].a + max(dp[i-1][1],dp[i-1][2]);
        dp[i][1] = arr[i].b + max(dp[i-1][0],dp[i-1][2]);
        dp[i][2] = arr[i].c + max(dp[i-1][0],dp[i-1][1]);
    }
    return max(dp[n-1][0] , max(dp[n-1][1],dp[n-1][2]));
}
int main(){


    int n,k;
    cin>>n;
    vector<activity> arr(n+1);
    for(int i=0;i<n;i++){
        cin>>arr[i].a;
        cin>>arr[i].b;
        cin>>arr[i].c;

    }
    cout<<func(arr,n)<<endl;


    return 0;
}