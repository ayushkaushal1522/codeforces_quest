#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long int n,m,k;
        cin>>n>>m>>k;
        long long int x,y;
        cin>>x>>y;
        int flag = 0;
        while(k--){
            long long int a,b;
            cin>>a>>b;
            long long int c = abs(a-x)+abs(b-y);
            if(c%2==0){
                flag=1;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }


    }




    return 0;
}