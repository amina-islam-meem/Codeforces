#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,m,a,b;
    cin >> n >> m >>a >> b;
    int c = (n/m)*b;
    int p = (n%m)*a;
    int q = n*a;
    int r = ((n + m - 1) / m) * b;
    cout << min({q,r,(p+c)}) << endl;

    return 0;
}
