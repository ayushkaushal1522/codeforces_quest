#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        mini=min(mini,abs(temp-0));
    }
    cout<<mini<<endl;
    return 0;
}