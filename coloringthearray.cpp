#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int ab=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            ab+=temp;
        }
        if(ab%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }



    return 0;
}