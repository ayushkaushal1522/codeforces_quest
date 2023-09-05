#include<bits/stdc++.h>
using namespace std;
int main(){
    int ee;
    cin>>ee;
    while(ee--) {
        int lop;
        cin>>lop;
        vector<int> mnm(lop);
        for (int i=0;i<lop; ++i) {
            cin>>mnm[i];
        }
        if (*max_element(mnm.begin(),mnm.end())>lop) {
            cout<<"NO"<<endl;
            continue;
        }
        vector<int> ponky(lop+1,0);
        for (int i=0;i<lop;i++) {
            ponky[0]++;
            ponky[mnm[i]]--;
        }
        int cv = 0;
        for (int i=0;i<lop;i++){
            cv+=ponky[i];
            ponky[i]=cv;
        }
        bool asd=true;
        for (int i=0;i<lop;i++) {
            if(ponky[i]!=mnm[i]) {
                asd=false;
                break;
            }
        }
        if(asd){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
