#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int b,c,h;
        cin>>b>>c>>h;
        int d = c+h;
        if(d<b){
            cout<<d+(d+1)<<endl;
        }
        else{
            cout<<b+(b-1)<<endl;
        }
        // int count = 0;
        // while(true){
            
        //     if(b<2 || (c==0 && h==0)){
        //         break;
        //     }
        //     b--;
        //     count++;
        //     if(c>0){
        //         c--;
        //         count++;
        //     }
        //     else{
        //         h--;
        //         count++;
        //     }
            
        //     b--;
        //     count++;
            
        // }
        // cout<<count<<endl;
    }

    return 0;
}