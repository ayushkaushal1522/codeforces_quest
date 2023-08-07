#include<bits/stdc++.h>
using namespace std;
 vector<long long int > solve(vector<long long int > arr, long long int h) {
        sort(arr.begin(),arr.end());
        long long int sum = 0;
        long long int p = 0;
        long long int time = 0;
        for (long long int  i = 0; i < arr.size(); i++) {
            if (time + arr[i] <= h) {
                time += arr[i];
                p++;
                sum += time;
            }
        }
        vector<long long int> ar(2);
        ar[0] = p;
        ar[1] = sum;
        return ar;
    }
int main(){

    long long int t;
    cin>>t;
    while(t--){
            long long int n,m,h; 
            cin>>n>>m>>h;
            long long int ans = 1;
             long long int rp = 0;
             long long int rpe = 0;
             vector<long long int> arr(m);
            for (long long int i = 0; i < m; i++) {
               cin>>arr[i];
            }
            vector<long long int> answ =solve(arr, h);
            rp = answ[0];
            rpe = answ[1];
            n--;
            while (n-- > 0) {
                for (long long int i = 0; i < m; i++) {
                   cin>>arr[i];
                }
                answ = solve(arr, h);
                // System.out.println(answ[0]+" "+answ[1]);
                if (answ[0] > rp || (answ[0] == rp && answ[1] < rpe))
                    ans++;
             }
             cout<<ans<<endl;
          
    }
   











    return 0;
}