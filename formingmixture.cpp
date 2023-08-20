#include<bits/stdc++.h>
using namespace std;

// Not related to this question
// The series which is used to find the number of bst using n nodes 
// from 1 to n is known as catalan series in which we make every node a root.

//catalan formula is given by 2n C n /(n+1) for bst
//catalan formula is given by n! *  2n C n /(n+1) for bt.



vector<int> arr(1000 , 0);
vector<vector<long long int >> dp(1000,vector<long long int>(1000,-1));



long long sum(int s, int e){
    long long int ans = 0 ;
    for(int i=s;i<=e;i++){
        ans+=arr[i];
        ans%=100;
    }
    return ans;


}

long long int func(int i ,int j){
    if(i>=j) return 0;


    // if answer is already computed
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    dp[i][j] = INT_MAX;
    for(int k=i;k<=j;k++){
        dp[i][j] = min(dp[i][j] ,func(i,k) + func(k+1,j) + (sum(i,k)*sum(k+1,j)));

    }
    return dp[i][j];



}


int main(){

    int n;
    cin>>n;
    

    while((scanf("%d" , &n))!=EOF){

        //read n numbers
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<func(0,n-1)<<endl;

    }


    return 0;
}