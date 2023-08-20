#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int result = 0;

    set<int> A, B;
    B.insert(a[0]);

    for (int i = 1; i < n; i++)
    {
        int w = A.order_of_key(a[i]);
        int w1 = B.order_of_key(a[i]);

        if (w == 0 && w1 != 0)
        {
            A.insert(a[i]);
            result++;
        }

        B.insert(a[i]);
    }

    cout << result << endl;
}
int main(){


    int t;
    cin>>t;
    while(t--){
        solve();
    }


    return 0;
}