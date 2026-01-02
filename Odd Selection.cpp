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
        int N,X; cin >> N >> X;
        int arr[N];
        int even = 0;
        int odd = 0;

        for( int i  = 0 ; i < N ; i++)
        {
            cin >> arr[i];
            if(arr[i]%2 == 0)
                even++;
            else
                odd++;
        }
        if( !odd )
            cout << "No" << endl;
        else
        {
            X--; odd--;
            while(X>0)
            {
                if(odd>=2 && X>=2){
                    odd-=2;
                    X-=2;}
                    else if(even)
                    {
                        even--;
                        X--;
                    }
                    else
                        break;
            }
            if(X)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<< endl;
        }
    }
    return 0;
}*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--)
        {
        int N, X; cin >> N >> X;
        int even = 0;
        int odd = 0;

        for (int i = 0, a; i < N; ++i)
            {
            cin >> a;
            if(a % 2 == 0)
                even++;
                else
                   odd++;
        }

        if (odd == 0)
            {
            cout << "No"<< endl;
            continue;
           }

        int flag = 0;
        for (int i = 1; i <= odd && i <= X; i += 2)
           {
            if (X - i <= even)
            {
                flag = 1;
                break;
            }
          }

        if(flag == 1)
            cout<< "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}

