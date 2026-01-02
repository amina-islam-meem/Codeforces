#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int S,T; cin >> S >> T;
    pair< int,int>arr[1000];

    for(int i = 0 ; i < T ; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr,arr+T);
    int count = 0;
    for(int i = 0 ; i < T ; i++)
    {
        if(S>arr[i].first)
        {
           S+=arr[i].second;
        }
        else
        {
            count++;
            break;
        }
    }
    if(count > 0)
        cout<<"NO"<<endl;
    else
        cout << "YES" << endl;

    return 0;
}
