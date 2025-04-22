#include "iostream"
#include "cstring"
#include "algorithm"
#include "unordered_set"

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    unordered_set<string> hash;
    while (n -- ) {
        string name;
        cin >> name;
        hash.insert(name);
    }
    cin >> m;
    string a, b;
    
    int cnt = 0;
    while (m -- ) {
        string name;
        cin >> name;
        if (hash.count(name)) {
            cnt ++ ;
            if (a.empty() || a.substr(6, 8) > name.substr(6, 8)) a = name;
        }
        if (b.empty() || b.substr(6, 8) > name.substr(6, 8)) b = name;
    }
    cout << cnt << '\n';
    if (cnt) cout << a << '\n';
    else cout << b << '\n';
    return 0;
}