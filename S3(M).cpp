#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n; cin >> n;
    vector<long long>a(n);
    long long mn = LLONG_MAX;
    long long mx = LLONG_MIN;
    long long mini= 0;
    long long mxi = 0;
    for(long long i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        if(a[i]<mn){
            mn = a[i];
            mini = i;
        }
       if(a[i]>mx)
       {
           mx =a[i];
           mxi = i;
       }
    }

    swap(a[mini],a[mxi]);

    for(long long i = 0 ; i < n ;i++)
    {
        cout << a[i] <<" ";
    }

    return 0;
}
