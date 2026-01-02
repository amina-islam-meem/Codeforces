#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;cin>>N;
    int count = 0;
    int arr[N][N];
    for(int i = 0 ;i< N ; i++)
    {
        for(int j = 0; j<2 ; j++)
         cin>>arr[i][j];
    }
    for(int i = 0 ;i< N ; i++)
    {
        for(int j = 0; j<N ; j++)
        {
         if(i==j)
            continue;
         if(arr[i][0]==arr[j][1])
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
