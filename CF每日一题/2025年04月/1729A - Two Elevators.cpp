#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;
    int a, b, c;
    cin >> T;
    while (T -- ) {
        cin >> a >> b >> c;
        if (a > abs(b - c) + c) cout << 2 << endl;
        else if (a == abs(b - c) + c) cout << 3 << endl;
        else cout << 1 << endl;
    }
    return 0;
}