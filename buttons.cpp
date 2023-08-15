#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int et;
    cin>>et;
    while(et--){
        long long int p,q,r;
        cin>>p>>q>>r;
        long long int fgh1 = p+(r/2)+r%2;
        long long int fgh2 = q+(r/2);
        if(fgh1>fgh2) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }



    return 0;
}