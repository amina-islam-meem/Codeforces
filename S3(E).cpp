#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;cin>>N;
    int Arr[N+1];
    int mini = INT_MAX;
    int index = 0;
    for(int i=0; i<N;i++)
    {
        cin>>Arr[i];
        if(Arr[i]<mini)
        {
            mini = Arr[i];
            index = i+1;
        }

    }
    cout<<mini<<" "<<index<<endl;
    return 0;

}
