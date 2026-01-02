#include<bits/stdc++.h>
using namespace std;

void concat(const vector<int>& a, const vector<int>& b, int n)
 {
    vector<int> c;
    for (int i = 0 ; i < n ; i++)
    {
        c.push_back(b[i]);
    }
    for (int i = 0 ; i < n ; i++)
    {
        c.push_back(a[i]);
    }
    for (int x : c)
    {
        cout << x <<" ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N; cin >> N;
    vector < int > a(N);
    vector <int> b(N);
    for (int i = 0 ; i < N ; i++)
    {
        cin >> a[i];
    }
    for (int i = 0 ; i < N ; i++)
    {
        cin >> b[i];
    }
    concat(a,b,N);
    return 0;
}
