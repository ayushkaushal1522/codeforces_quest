#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        vector<int> black;
        for(int i=0;i<n;i++){
            if(str[i]=='B') black.push_back(i);
        }
        long long int maxi = -1;
        long long int res=0;
        for(int i=0;i<black.size();i++){
            if(maxi<black[i]){
                maxi = black[i]+k-1;
                res++;
            }
        }
        cout<<res<<endl;

    }




    return 0;

}