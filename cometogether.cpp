#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int>> pp;
        for(int i=0;i<3;i++){
            int a,b;
            cin>>a>>b;
            pp.push_back({a,b});
        }
        int ans = 1;
        if(pp[0].first<=pp[1].first && pp[0].first<=pp[2].first){
            ans+=min(pp[1].first-pp[0].first ,pp[2].first-pp[0].first);
        }
        if(pp[0].second<=pp[1].second && pp[0].second<=pp[2].second){
            ans+=min(pp[1].second-pp[0].second ,pp[2].second-pp[0].second);
        }
         if(pp[0].first>=pp[1].first && pp[0].first>=pp[2].first){
            ans+=min(pp[0].first-pp[1].first ,pp[0].first-pp[2].first);
        }
        if(pp[0].second>=pp[1].second && pp[0].second>=pp[2].second){
            ans+=min(pp[0].second-pp[1].second ,pp[0].second-pp[2].second);
        }
        cout<<ans<<endl;

    }





    return 0;
}