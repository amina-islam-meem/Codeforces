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
        int count = 0;
        int freq[26] = {0};

        for (int i = 0; i < N; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                freq[s[i] - 'A']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 1)
            {
                count = count + 2;
            }
            else if (freq[i] > 1)
            {
                count = count + (freq[i] + 1);
            }
        }

        cout << count << endl;
    }
    return 0;
}
