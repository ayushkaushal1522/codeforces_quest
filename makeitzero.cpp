#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
        }
        if(n%2==0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else{
            cout<<4<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
    }


    return 0;
}