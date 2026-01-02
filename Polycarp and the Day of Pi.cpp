#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
     string pi = "314159265358979323846264338327";
    while(T--)
    {
        string n; cin >> n;
        int count = 0;

             for (int i = 0; i < n.size(); i++)
                {
                   if (n[i] == pi[i])
                       count++;
                    else
                       break;
                }
             cout << count << endl;

    }
    return 0;
}
