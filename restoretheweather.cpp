#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
            long long int n,k,b;
            cin>>n>>k;
            vector<pair<long long int,long long int>> first;
            vector<long long int> second;
            vector<long long int> ans(n);
            for(long long int i = 0 ; i < n ; i++) {
                cin>>b;
                first.push_back(make_pair(b,i));
            }
            for(long long int i = 0 ; i < n ; i++) {
                cin>>b;
                second.push_back(b);
            }
            sort(first.begin(),first.end());
            sort(second.begin(),second.end());
            for(long long int i = 0 ; i < n ; i++) {
                ans[first[i].second] = second[i];
            }
            for(long long int i = 0 ; i < n ; i++) {
                cout<<ans[i]<<" ";   
            }
            cout<<endl;
    }



    return 0;
}