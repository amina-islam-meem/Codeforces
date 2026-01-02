#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int n; cin >> n;

    long long int r,c;
    r = n/4;
    c = n%4;
    cout<< r << " " << c << endl;
    return 0;
}
