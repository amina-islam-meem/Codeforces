#include<bits/stdc++.h>
using namespace std;


long long fibbo(int n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    vector<long long> arr(n + 1);
    arr[1] = 0;
    arr[2] = 1;

    for (int i = 3; i <= n; i++)
        {
        arr[i] = arr[i - 1] + arr[i - 2];
        }

    return arr[n];
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    cout << fibbo(n) << endl;
    return 0;
}
