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
        string s; cin >> s;
        int count = 0 ;
        int em = 0;
        for(char c : s)
        {
            if(c == '.')
            {
                em++;
                count++;
                if(count == 3)
                    break;
            }
            else
            count = 0;
        }
        if(count == 3)
            cout << 2 << endl;
        else
            cout << em << endl;


    }
    return 0;
}
