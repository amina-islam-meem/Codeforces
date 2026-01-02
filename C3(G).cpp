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
        for(int i = 0 ; i < N ; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        int count1 = 0;
        for(int i = 0 ; i < N ; i++)
        {
            if(N%2==0){
                if(arr[i]%2==0)
                    count++;
                    else
                        count1++;
            }

        }
        if(N%2==0)
        {

            cout<<(N/2)-min(count,count1)<<endl;


        }
        else
            cout<<-1<<endl;


    }
    return 0;
}
