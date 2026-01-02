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
        bool check = false;

        for (int i = 1; i <= 10; i++)
            {
                if(i%2 == 0){
               if((N+1)%3==0 || (N-1)%3==0)
                  {
                      check = true;
                      break;
                  }
                }
                if (N % 3 == 1)
                     N--;
             else if (N% 3 == 2)
                    N++;
             else
                N++;

             }
             if(check)
                cout << "Second" << endl;
             else
                cout << "First" << endl;

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
        if((N+1)%3==0 || (N-1)%3==0)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
    return 0;
}




