#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if (n == 1){
            cout<<"1"<<endl;
        }
        else if(n==2){
            cout<<"2 1"<<endl;
        }
        else{
            int c = 4;
            vector<int> arr(n,0);
            arr[0] = 2;
            arr[n / 2] = 1;
            arr[n - 1] = 3;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == 0){
                    arr[i] = c++;
                }
            }
            for (int i = 0; i < n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    
    }


    return 0;
}