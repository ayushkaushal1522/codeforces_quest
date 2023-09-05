#include<bits/stdc++.h>
using namespace std;
int main(){
    int et;
    cin>>et;
    while(et--){
            int n , m;
            cin>>n>>m;
            vector<vector<char>> ppp(n,vector<char>(m));
            for(int b=0;b<n;b++){
                string str;
                cin>>str;
                for(int j=0;j<m;j++){
                    ppp[b][j] =str[j];
                }
            }
            char tosearch='v';
            for(int b=0;b<m;b++){
                for(int j=0;j<n;j++){
                    if(ppp[j][b]==tosearch){
                        if(tosearch=='v') {tosearch = 'i';break;}
                        if(tosearch=='i') {tosearch = 'k';break;}
                        if(tosearch=='k') {tosearch = 'a';break;}
                        if(tosearch=='a') {tosearch = 'z';break;}

                    }
                }
            }
            if(tosearch=='z') cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }



    return 0;
}