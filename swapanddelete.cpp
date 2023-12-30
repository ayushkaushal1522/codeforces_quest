#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n = str.length();
        long long int z = 0;
        long long int o = 0;
        for(int i=0;i<n;i++){
            if(str[i]=='0') z++;
            if(str[i]=='1') o++;
        }
        int flag = 0;
        for(int i=0;i<n;i++){
            if(str[i]=='0') o--;
            if(o<0){
                cout<<n-i<<endl;
                flag = 1;
                break;
            }
            if(str[i]=='1') z--;
            if(z<0){
                cout<<n-i<<endl;
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout<<0<<endl;
        }

        
    }



    return 0;

}