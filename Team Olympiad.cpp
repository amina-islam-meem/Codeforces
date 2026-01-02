#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N; cin >> N;
    int arr[N];
    int p[5000];
    int m[5000];
    int s[5000];
    int countp = 0;
    int countm = 0;
    int counts = 0;
    for ( int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
        if(arr[i]== 1 )
            p[countp++] = i+1;
        else if (arr[i]== 2)
            m[countm++] = i+1;
        else
            s[counts++] = i+1;
    }
    int w = min({countp, countm,counts});
    cout << w << endl;
    for (int i = 0 ; i < w; i++)
    {
       cout<< p[i] <<" "<< m[i] <<" "<< s[i]<<endl;
    }

    return 0;
}
