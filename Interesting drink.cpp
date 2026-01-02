/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

int binarysrch(vector<int> &a, int n,int x)
{
    int low = 0;
    int high = n-1;
    int count = -1;
    while(low <= high)
    {
        int mid = (low + high)/2;

        if(a[mid] <= x)
        {
            count = mid;
            low = mid +1;
        }
        else
            high = mid-1;
    }
    return count+1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n ; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int q; cin >> q;
    while(q--)
    {
        int x; cin>>x;

        cout <<binarysrch(a,n,x) << nl;
    }
    return 0;
}



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

    int n; cin >> n;
    vector<int>a(n);
    int fre[100002] = {0};
    for(int i = 0; i < n ; i++)
    {
        cin>>a[i];
        fre[a[i]]++;
    }

    for(int i=1;i<100002;i++)
        {
           fre[i]+= fre[i-1];
        }
    int q; cin >> q;
    while(q--)
    {
        int x; cin>>x;
        if(x>100001)
            x = 100001;
        cout << fre[x] << nl;

    }
    return 0;
}*/

//UVA problem
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

int binarysrch(vector<int> &a, int n,int x)
{
    int low = 0;
    int high = n-1;
    int count = -1;
    while(low <= high)
    {
        int mid = (low + high)/2;

        if(a[mid] == x)
        {
            count = mid;
            high = mid -1;
        }
        else if(a[mid]< x)
            low = mid +1;
        else
            high = mid -1;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,q,casE=1;

    while(true)
        {
        cin >> n >> q;
       if(n== 0 && q == 0) break;
        vector<int>a(n);
       for(int i = 0; i < n ; i++) cin >> a[i];

       sort(a.begin(),a.end());
       cout << "CASE# " << casE++ << ":" << nl;

    while(q--)
    {
        int x; cin>>x;

        int m = binarysrch(a,n,x);
        if(m == -1)
            cout << x << " not found" << nl;
        else
           cout << x << " found at " <<  m+1 << nl;

    }
        }
    return 0;
}
