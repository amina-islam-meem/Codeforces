#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
        arr[i]--;
    }
    for(int i = 0;i < n;i++)
    {
        int a = i;
        int b = arr[a];
        int c = arr[b];

        if (arr[c] == a) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout<< "NO" <<endl;
    return 0;

}
