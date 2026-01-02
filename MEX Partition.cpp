#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >> T;
    while(T--)
    {
    	int N; cin >> N ;
        vector <int> a(105,0);

        for(int i = 0; i < N; i++)
            {
        	int x; cin >> x;
            a[x]++;
           }

        int count = 0;
        while(a[count] > 0)
        {
            count++;
        }

        cout << count << nl;
    }
    return 0;
}
