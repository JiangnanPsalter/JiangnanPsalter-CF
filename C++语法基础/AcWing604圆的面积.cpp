#include "bits/stdc++.h"
#include "iomanip"
using namespace std;

#define PI 3.14159

int main()
{
    double x;
    cin >> x;
    cout << "A=" << fixed << setprecision(4) << PI * pow(x, 2) << endl;
    return 0;
}

//法2：
// #include "iostream"
// #include "cstdio"
// #include "cmath"
// #define PI 3.14159
// using namespace std;

// int main()
// {
//     double x, A;
//     scanf("%lf", &x);
//     A = PI * pow(x, 2);
//     printf("A=%.4lf", A);
// }