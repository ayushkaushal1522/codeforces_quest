#include<bits/stdc++.h>
using namespace std;
int main(){

    int ee;
    cin>>ee;
    while(ee--){
        int f ,g ,h;
        cin>>f>>g>>h;
        int cc = 0;
        int mm1 = max(f,g);
        int mm2 = min(f,g);
        while(mm1-mm2>2*h){
            cc++;
            mm1-=h;
            mm2+=h;
        }
        if(mm1>mm2) cc++;
        cout<<cc<<endl;
    }


    return 0;
}