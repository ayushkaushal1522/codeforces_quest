#include<bits/stdc++.h>
using namespace std;
int main(){


    long long int t;
    cin>>t;
    while(t--){
        int count=1;
        long long int x,k;
        cin>>x>>k;
        long long int temp=x;
        while(x%k==0){
            x--;
        }
        if(temp!=x){
            count++;
        }
        cout<<count<<endl;
        if(count==1)
            cout<<x;
        else
             cout<<x<<" "<<temp-x;
        cout<<endl;

    }







    return 0;
}