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
        int arr[9];

        for( int i = 0 ; i < N ; i++)
        {
            cin >> arr[i];
        }
        int maxp = 0;
        for( int i = 0 ; i < N ; i++)
        {
            int m [N];
            for( int j = 0 ; j < N ;j++)
                {
                m[j]=arr[j];
                }

            m[i] += 1;

            int p = 1;
            for (int j = 0 ; j < N ; j++)
                {
                p = p*m[j];
                }
                maxp = max(maxp,p);

        }
     cout<<maxp<<endl;

    }
    return 0;
}
