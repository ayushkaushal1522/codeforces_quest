#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t;
    cin>>t;
    while(t--){
        long long int n,k,x;
        cin>>n>>k>>x;
        if(k>n || k-1>x) {cout<<-1<<endl;continue;}
        else{
            long long int temp = k-1;
            long long int res = temp*(temp+1)/2;
            long long int rest = n-k;
            if(x!=k) res+=rest*x;
            else res+=rest*(k-1);
            cout<<res<<endl; 
        }
    }


    return 0;
}