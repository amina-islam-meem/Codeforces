#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C, D;
    cin >> A >> B >> C >> D;

    double log1 = B * log(A);
    double log2 = D * log(C);

    if (log1 > log2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
