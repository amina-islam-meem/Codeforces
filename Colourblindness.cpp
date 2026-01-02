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
        string s1 , s2;
        cin >> s1 >> s2;
        int flag = 1;
        for (int i = 0; i < N; i++)
            {
            char c1 = s1[i];
            char c2 = s2[i];

            if (c1 == 'B')
                c1 = 'G';
            if (c2 == 'B')
                c2 = 'G';

            if (c1 != c2)
                {
                 flag = 0;
                  break;
               }
            }

        if(flag==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}



