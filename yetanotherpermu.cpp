#include<bits/stdc++.h>
using namespace std;
int main(){


    int et;
    cin>>et;
    while(et--){
        int bnm;
        cin>>bnm;
        vector<int> zdf;
        zdf.push_back(1);
        vector<int> qwe(bnm+1);
        qwe[1]=1;
        for(int k=2;k<=bnm;k++){
            if(qwe[k]==1) continue;
            int asd = k;
            while(asd<=bnm){
                if(qwe[asd]!=1){
                    zdf.push_back(asd);
                    qwe[asd]=1;
                    asd*=2;

                }
            }
        }
        for(auto it : zdf){
            cout<<it<<" ";
        }
        cout<<"\n";
    }





    return 0;
}