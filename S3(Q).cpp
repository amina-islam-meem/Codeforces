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
        vector<int>a(N);
        int count = 0 ;
        for(int i = 0 ; i < N ; i++)
        {
            cin >> a[i];
        }

        for(int i = 0 ; i < N ; i++)
        {
            count++;
            for(int j = i+1; j < N ; j++)
            {
                    if(a[j] > a[j-1])
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
            }
        }
        cout << count << endl;


    }
    return 0;
}
