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
         char arr[8][8];
        for (int i = 0; i < 8; i++)
            {
                for(int j=0; j < 8 ; j++){
            cin >> arr[i][j];}
           }
     for (int i = 0; i < 8; i++)
            {
                for(int j=0; j < 8 ; j++)
                    {
                 if(arr[i][j]=='.')
                    continue;
                 else
                    cout<<arr[i][j];
                }
           }
           cout<<endl;


    }
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

void fun(int arr[], int N)
 {
    sort(arr, arr + N, greater<int>());
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
        {
        cin >> arr[i];
       }

    fun(arr, N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
