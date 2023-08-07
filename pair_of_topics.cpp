#include<iostream>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<long long int,long long int>,null_type,less<pair<long long int,long long int>>,rb_tree_tag,tree_order_statistics_node_update> PBDS;

int main(){

    int n;
    cin>>n;
    long long int l[n];
    long long int o[n];
    long long int m[n];
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    for(int i=0;i<n;i++){
        cin>>o[i];
    }
    for(int i=0;i<n;i++){
        m[i]=l[i]-o[i];
    }
    PBDS st;
    long long int res=0;
    for(int i=0;i<n;i++){
        res+=st.size()-st.order_of_key({-m[i],10000000});
        st.insert({m[i],i});
    }
    cout<<res;

}