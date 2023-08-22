#include<bits/stdc++.h>
using namespace std;

const int NN=1005;
int boystart[NN][NN];
int boyend[NN][NN];
int girlstart[NN][NN];
int girlend[NN][NN];
int calorie[NN][NN];



int maxcal(int m ,int n){

    //boystart things
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            boystart[i][j] = calorie[i][j] + max(boystart[i-1][j], boystart[i][j-1]);
        }
    }

    //girlstart things

    for(int i=m;i>=1;i--){
        for(int j=1;j<=n;j++){
            girlstart[i][j] = calorie[i][j] + max(girlstart[i+1][j], girlstart[i][j-1]);
        }
    }

    //boyend things

    for(int i=m;i>=1;i--){
        for(int j=n;j>=1;j--){
            boyend[i][j] = calorie[i][j] + max(boyend[i+1][j], girlstart[i][j+1]);
        }
    }

    // girlend things

    for(int i=1;i<=m;i++){
        for(int j=n;j>=1;j--){
            girlend[i][j] = calorie[i][j] + max(girlend[i-1][j], girlend[i][j+1]);
        }
    }

    int ans=0;
    for(int i=2;i<m;i++){
        for(int j=2;j<n;j++){
            int ans1 = boystart[i][j-1] + boyend[i][j-1] + girlstart[i+1][j] + girlend[i-1][j];
            int ans2 = boystart[i-1][j] + boyend[i+1][j] + girlstart[i][j-1] + girlend[i][j+1];
            ans = max(ans, max(ans1,ans2));
        }
    }

    return ans;





}
int main(){






    return 0;
}