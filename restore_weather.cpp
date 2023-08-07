#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,k,temp;
       cin>>n>>k;
       vector<ll> sec,res(n);
       vector<pair<ll,ll>> first;
       for(ll i=0;i<n;i++){
        cin>>temp;
        first.push_back(make_pair(temp,i));
       }
       for(ll i=0;i<n;i++){
        cin>>temp;
        sec.push_back(temp);
       }
       sort(first.begin(),first.end());
       sort(sec.begin(),sec.end());
       for(ll i=0;i<n;i++){
        res[first[i].second]=sec[i];
       }
       for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
       }
       cout<<endl;

    }
}