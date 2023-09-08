#include<bits/stdc++.h>
using namespace std;
int main(){
    int ee;
    cin>>ee;
    while(ee--){

            long long int bm;
            cin>>bm;


            long long int wer[bm];

            
            for(int i=0;i<bm;i++){
                cin>>wer[i];
            }
            string crr;
            cin>>crr;


            vector<int> store(bm+1,0);


            int temp1=0,temp2=0;


            for(int j=0;j<bm;j++){
                store[j+1]=store[j]^wer[j];


                if(crr[j]=='0') temp1^=wer[j];


                else temp2^=wer[j];
            }


            long long int ran;
            cin >>ran;
            while(ran--){
                long long int lol;


                cin >>lol;


                long long int aa,bb;
                if(lol == 1){
                    cin >>aa >> bb;
                    
                    temp2=(temp2^store[bb]^store[aa-1]);
                    
                    
                    temp1=(temp1^store[bb]^store[aa-1]);


                }else {
                    cin >> aa;
                    if(aa==0)cout<<temp1;


                    else cout<<temp2;


                    cout<<" ";

                }

            }
            cout<<endl;



    }
        return 0;
}


