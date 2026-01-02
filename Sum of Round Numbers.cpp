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
        string s = to_string(N);
        int count = 0;
        int len = s.size();
        for(int i = 0 ; i < len ; i++)
        {
            if(s[i]!= '0')
            count++;

        }
        cout << count << endl;

         for(int i = 0 ; i < len ; i++)
        {
            if(s[i]!= '0'){
                string c;
                c += (s[i] + string(len - i - 1, '0'));
                cout << c << " ";
            }
        }
        cout << endl;

    }
    return 0;
}
