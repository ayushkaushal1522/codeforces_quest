#include<bits/stdc++.h>
using namespace std;

int func(vector<int> &arr , int i ,int j , int year){


    if(i>j) return 0;

    int l = arr[i]*year + func(arr,i+1,j,year+1);
    int r = arr[j]*year + func(arr,i,j-1,year+1);
    return max(l,r);




}
int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    // cout<<func(arr,0,n-1,1)<<endl;
    int year = n;
    for(int i=0;i<n;i++){
        dp[i][i]= arr[i] * year;
    }
    year--;
    for(int slide = 1;slide<n;slide++){
        for(int j=slide;j<n;j++){
            int i=j-slide;
            int l = arr[i]*year + dp[i+1][j];
            int r = arr[j]*year + dp[i][j-1];
            dp[i][j] = max(l,r);
        }
        year--;
    }
   cout<<dp[0][n-1]<<endl;





    return 0;
}