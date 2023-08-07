#include<bits/stdc++.h>
using namespace std;


int main() {
  long long t; cin >> t;
  while (t--) {
            long long  n;
            cin >> n;
            long long  p =(n*(n - 1))/2;
            map<long long ,long long > mmm;
            for(long long  i=0;i<p;i++){
                    long long  temp;
                    cin>>temp;
                    mmm[temp]++;
            }

          long long  as=n-1;
          vector<long long> brr;
            for(auto it : mmm) {
                    if(as==it.second) {
                        brr.push_back(it.first);
                        as--;
                    } 
                    else{
                        long long  z=as,q=0;
                        while(z>0 && it.second!=q) {
                            q+=z;
                            brr.push_back(it.first);
                            z--;
                        }
                        as=z;
                    }
                }
  

        for(auto it : brr)
            cout<<it<<" ";

        long long  y=brr.size();
        while(y!=n) {
            cout<<1000000000<< " ";
            y++;
        }

        cout<<endl;
    }
   return 0;
  }
   
