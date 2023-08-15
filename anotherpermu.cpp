#include<bits/stdc++.h>
using namespace std;
int main(){

    int pt;
    cin>>pt;
    while(pt--){
        long long int num;
        cin>>num;
        long long int last=0;
        for(long long int k=1;k<=num;k++){
            long long int res=0;
            long long int maxi=0;
            for(long long int l=1;l<k;l++){
                res+=l*l;
                maxi = max(maxi,l*l);
            }
            int y=num;
            for(long long int m=k;m<=num;m++){
                res+=m*(y);
                maxi=max(maxi,m*y);
                y--;
            }
            res-=maxi;
            last=max(last,res);

        }
        cout<<last<<endl;


    }





    return 0;
}