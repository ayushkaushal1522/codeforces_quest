#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int  tt;
    cin>>tt;
    while(tt--){
        long long int num;
        cin>>num;
        long long int res=0;
        while(num){
            res+=num;
            num/=2;
        }
        cout<<res<<endl;
    }


    
    return 0;

}