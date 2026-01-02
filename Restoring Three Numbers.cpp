#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int arr[4] = {a, b, c, d};
    sort(arr, arr + 4);
        int m = arr[3]-arr[0];
        int n = arr[1]-m;
        int o = arr[2]-m;
        cout<<m<<" "<<n<<" "<<o;


    return 0;
}
