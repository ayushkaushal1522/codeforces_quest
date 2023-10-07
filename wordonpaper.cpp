#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;
    while(t--){
        char arr[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>arr[i][j];

            }
        }
        string res = "";
        for(int i=0;i<8;i++){
            int flag=0;
            for(int j=0;j<8;j++){
                if(arr[i][j]!='.'){
                    
                    for(int k=i;k<8;k++){
                        if(arr[k][j]=='.') {flag=1;break;}
                        res+=arr[k][j];
                    }
                }
            }
            if(flag==1 || res!=""){
                break;
            }
        }
        cout<<res<<endl;

    }

    return 0;
}