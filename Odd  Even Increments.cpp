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
        int arr[N+1];

        for( int i = 1 ; i <= N ; i++)
        {
            cin >> arr[i];
        }
        int even = 0, odd = 0;
        int even1 = 0 , odd1 = 0;
        for( int i = 1 ; i <= N ; i++)
        {
            if(i%2==0)
            {
                if(arr[i]%2==0)
                    even++;
                else
                    odd++;
            }
            else
            {
                if(arr[i]%2==0)
                    even1++;
                else
                    odd1++;
            }
        }
        if((even==(N/2)||(odd == (N/2)))&&(even1==(N/2)||(odd1 == (N/2))))
        cout<<"YES"<<endl;
        else
        cout << "NO" << endl;


    }
    return 0;
}


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
        int arr[N];
        for( int i = 0 ; i < N ; i++)
        {
            cin >> arr[i];
        }
       bool possible = true;
       in_range(i,0,N-1)
       {
           if(i-2>-1 and arr[i]%2!=arr[i-2]%2)
           {
               possible = false;
               break;
           }
       }
       (possible)?Yes:No;

    }
    return 0;
}*/






#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int arr[N];

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int flag = 1;
        for (int i = 2; i < N; i++)
        {
            if (arr[i] % 2 != arr[i - 2] % 2)
            {
                flag = 0;
                break;
            }
        }
        if(flag==1)
           cout << "YES"<< endl;
        else
            cout<< "NO"<< endl;
    }

    return 0;
}
