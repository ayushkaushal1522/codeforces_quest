#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10][10]={{1,1,1,1,1,1,1,1,1,1},
                     {1,2,2,2,2,2,2,2,2,1},
                     {1,2,3,3,3,3,3,3,2,1},
                     {1,2,3,4,4,4,4,3,2,1},
                     {1,2,3,4,5,5,4,3,2,1},
                     {1,2,3,4,5,5,4,3,2,1},
                     {1,2,3,4,4,4,4,3,2,1},
                     {1,2,3,3,3,3,3,3,2,1},
                     {1,2,2,2,2,2,2,2,2,1},
                     {1,1,1,1,1,1,1,1,1,1},
                    };
    
    
    int t;
    cin>>t;
    while(t--){
        int total = 0;
        
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char temp;
                cin>>temp;
                if(temp=='X'){
                    total+=arr[i][j];
                }

            }
        }
        cout<<total<<endl;
    }


    return 0;
}