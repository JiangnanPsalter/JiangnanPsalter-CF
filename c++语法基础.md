# AcWing 1. A + B
```cpp
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    return 0;
}
```

# AcWing 608. 差
```cpp
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "DIFERENCA = " << a * b - c * d << endl;
    return 0;
}
```

# AcWing 604. 圆的面积
```cpp
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
```
2:
```cpp
#include "iostream"
#include "cstdio"
#include "cmath"
#define PI 3.14159
using namespace std;

int main()
{
    double x, A;
    scanf("%lf", &x);
    A = PI * pow(x, 2);
    printf("A=%.4lf", A);
}
```