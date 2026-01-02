#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

        int N; cin >> N;
        vector<string>s(N);
        map<string, int> fre;

        for(int i = 0 ; i < N ; i++)
        {
            cin>>s[i];
        }

        for(int i = 0 ; i < N ; i++)
        {
           if(fre[s[i]] == 0)
            cout << "OK" << endl;
           else
            cout << s[i] << fre[s[i]] << endl;

            fre[s[i]]++;

        }

    return 0;
}


