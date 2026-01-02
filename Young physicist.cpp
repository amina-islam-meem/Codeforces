#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int s1=0,s2=0,s3=0;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
        s1 = s1+ arr[i][0];
        s2 = s2 + arr[i][1];
        s3 = s3 + arr[i][2];
    }
    if(s1==0 && s2==0 && s3==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
