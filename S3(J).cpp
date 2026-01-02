#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    int count = 0;
    for(int i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    int mini = A[0];
    for(int i = 0; i < N; i++)
    {
        if(A[i] < mini)
        mini = A[i];
    }
    for(int i = 0; i < N; i++)
    {
        if(A[i] == mini)
            count++;
    }
    if(count % 2 == 0)
    cout<<"Unlucky"<<endl;
    else
        cout<<"Lucky"<<endl;
    return 0;

}
