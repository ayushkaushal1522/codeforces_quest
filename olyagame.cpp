#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int pp;
    cin>>pp;
    while(pp--){
        long long int num;
        cin>>num;
        vector<long long int> ram[num];
        vector<long long int> bam;
        vector<long long int> sam;
        for(int k=0;k<num;k++){
            long long int m;
            cin>>m;
            for(int l=0;l<m;l++){
                long long int y;
                cin>>y;
                ram[k].push_back(y);

            }
            sort(ram[k].begin(),ram[k].end());
            bam.push_back(ram[k][1]);
            sam.push_back(ram[k][0]);
        }
        sort(bam.begin(),bam.end());
        sort(sam.begin(),sam.end());
        long long int res=sam[0];
        for(int k=1;k<num;k++){
            res+=bam[k];
        }
        cout<<res<<endl;

    }




    return 0;
}