#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N; cin >> N;
    vector<int> arr(N);
    int sum = 0;
    int sum2 = 0;
    int count = 0;
    for(int i=0;i<N;i++)
    {
       cin>>arr[i];
       sum = sum + arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    sum = sum/2;
    for(int i=0;i<N;i++)
    {
        sum2 = sum2 + arr[i];
        count++;
        if(sum2 > sum)
            {
         cout<<count<<endl;
                break;
            }
    }

    return 0;
}
