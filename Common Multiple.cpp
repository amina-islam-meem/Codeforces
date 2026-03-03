/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        int count = 1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i = 1;i<n;i++)
        {
            if(arr[i]!=arr[i-1])
                count ++;
        }
        cout<<count<<endl;
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

using vi = vector<int>;
using vll = vector<long long>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        set<int>s;
        for(int i = 0 ; i < n ; i++)
        {
            int x; cin >> x;
            s.insert(x);
        }

        cout << s.size() << nl;

    }
    return 0;
}


