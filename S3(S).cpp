#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

   int n,m;cin>>n>>m;
   int arr[n][m];
   for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
   int x;cin>>x;
   int flag = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
           if(arr[i][j]==x)
            flag = 1;
        }
    }
    if(flag==1)
    cout<<"will not take number"<<endl;
    else
    cout<<"will take number"<<endl;
    return 0;
}
