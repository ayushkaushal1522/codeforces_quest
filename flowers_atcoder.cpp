#include<bits/stdc++.h>
using namespace std;
//The overall time complexity of this parrticular algo is O(nlogn)
//This is the partially complete code only the the code of removing the unecessary elements from the map
// needs to be written over here.
class Flower{
    int height;
    int bty;
}
long long int solve(vector<Flower> &arr , int n){
    vector<long long int> dp(n+1);
    map<int,int> mp;
    dp[1] = arr[1].bty;
    mp[arr[1].height] = dp[1];

    for(int i=2;i<=n;i++){
        dp[i] = arr[i].bty;
        auto it = mp.lower_bound(arr[i].height + 1);
        if(it!=mp.begin()){
            it--;
            dp[i]+=it->second;
        }
        mp[arr[i].height] = dp[i];
        it = mp.upper_bound(arr[i].height);

    }


}
int main(){

    int n;
    cin>>n;
    vector<Flower> v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i].height;
    }
    for(int i=1;i<=n;i++){
        cin>>v[i].bty;
    }
    cout<<solve(v,n)<<endl;



    return 0;
}