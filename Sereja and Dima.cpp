#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;cin>>N;
    vector<int>arr(N);
    int sereja = 0;
    int Dima = 0;
    for(int i = 0; i < N ; i++)
    {
        cin >> arr[i];
    }
    int l = 0;
    int r = N-1;

    for( int i = 0 ; l<= r ;i++ )
    {
        if(i%2==0)
        {
            if(arr[l]>arr[r])
            {
                sereja+= arr[l];
                l++;
            }
            else
            {
                sereja+=arr[r];
                r--;
            }
        }
        else
        {
            if(arr[l]>arr[r])
            {
                Dima+= arr[l];
                l++;
            }
            else
            {
                Dima+=arr[r];
                r--;
            }
        }

    }
    cout<<sereja<<" "<<Dima<<endl;
    return 0;
}



