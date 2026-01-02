/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int N; cin >> N;
        vector<int>arr(N);
        int mini = INT_MAX;
        int count = 0 ;
        for(int i = 0 ; i < N ; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        while(!arr.empty())
            {
                int mn = arr.front();
                int mx = arr.back();

        if((mn%2==0 && mx%2 == 0)|| ( mn%2 != 0 && mx%2 != 0))
            {
            break;
        }
        else if(mn%2 != 0 && mx%2 == 0)
        {
            arr.erase(arr.begin());
            count++;
        }
        else if(mn%2 == 0 && mx%2 != 0)
        {
            arr.erase(arr.end()-1);
            count++;
        }
            }


       cout<< count << endl;



    }
    return 0;
}*/







#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int N; cin >> N;
        vector<int>arr(N);
        for(int i = 0 ; i < N ; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        int mn = arr[0];
        int mx = arr[N-1];

        if((mn%2==0 && mx%2 == 0)|| ( mn%2 != 0 && mx%2 != 0))
            cout << 0 << endl;
        else
        {
            int i = 0 ;
            int count = 0;
            while(arr[i]%2 != mx %2 )
            {
                i++;
                count++;
            }

            int j = N-1 ;
            int count1 = 0;
            while(arr[j]%2 != mn %2 )
            {
                j--;
                count1++;
            }
            cout << min(count,count1) << endl;
        }

    }
    return 0;
}

