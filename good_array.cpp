#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
ll t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n+1,0);
    for(int i=1;i<=n;i++)
    {
        ll num=(i+k-1)/k;
        arr[i]=arr[i-1];
        if (num>arr[i])
        {
            arr[i]++;        
        }
    }
    ll suf=0;
    for(int i=n;i>=1;i--)
    {
        ll sum=suf+arr[n]-arr[n-i];
        ll num=(i+k-1)/k;
        if(num>sum)
        {
            suf++;
        }
    }
    cout<<suf+arr[n]<<endl;
}
return 0;
}