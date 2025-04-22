//暴君回归算法界后的复健运动
//🚀 本代码由 红名键盘 键入，Tourist同款玄学 开光。
//- 编辑于2025-04-18

#include "iostream"
#include "cstring"
#include "algorithm"

using namespace std;

bool is_prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= x / i; i ++ ) 
        if (x % i == 0) 
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = n - 6; i <= n + 6; i += 12) {
        if (is_prime(i) && is_prime(n)) {
            cout << "Yes" << '\n';
            cout << i << '\n';
            return 0;
        }
    }
    
    for (int i = n + 1; ; i ++ ) {
        if (is_prime(i) && (is_prime(i - 6) || is_prime(i + 6))) {
            cout << "No" << '\n';
            cout << i << '\n';
            return 0;
        }
    }
    return 0;
}