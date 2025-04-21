# [1729D - Friends and the Restaurant](https://codeforces.com/problemset/problem/1729/D)

```cpp
#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

int main()
{
    int t; cin >> t;
    while (t -- ) {
        int n; cin >> n;
        vector<ll> x(n), y(n), a, b;
        for (int i = 0; i < n; i ++ ) cin >> x[i];
        int sum = 0; 
        
        for (int i = 0; i < n; i ++ ) {
            cin >> y[i];
            x[i] = y[i] - x[i];
            if (x[i] > 0) a.push_back(x[i]);
            else if(x[i] == 0) sum ++ ;
            else b.push_back(x[i]);
        }
        
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend);
        
        ll ans = 0;
        int l = 0, r = b.size();
        for (int i = 0; i < a.size(); i ++ ) {
            if (l < r) {
                if (b[l] + a[i] >= 0) {
                    ans ++ ;
                    l ++ ;
                }
                else sum ++;
            }
            else sum ++ ;
        }
        cout << ans + sum / 2 << endl;
    }
    return 0;
}
```



