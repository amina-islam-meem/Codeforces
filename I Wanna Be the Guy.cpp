#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;cin>>n;
    int p;cin>>p;
    int arr1[p];
    int count=0;
    for(int i=0;i<p;i++)
    {
        cin>>arr1[i];
    }

    int q;cin>>q;
    int arr2[q];
    for(int i=0;i<q;i++)
    {
        cin>>arr2[i];
    }

    int m = p+q;
    int arr3[m];
    for(int i=0;i<m;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        arr3[p+i]=arr2[i];
    }

    sort(arr3,arr3+m);


    for(int i=0;i<m;i++)
    {
        if(arr3[i]!=arr3[i-1])
        count++;
    }

    if(count>=n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
