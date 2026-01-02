#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int N; cin >> N;
        if(N % 4 == 0)
           cout<< "Bob" << endl;
           else
            cout << "Alice" << endl;

    }
    return 0;
}
