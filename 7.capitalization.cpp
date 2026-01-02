/*#include<iostream>
using namespace std;
int main()
{
    string S;cin>>S;
    if(S[0]>='a'&&S[0]<='z')
    {

    }



}*/
#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int a = 0, b = 1;

    for (int i = 1; i <= N; i++) {
        cout << a;
        if (i != N) cout << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;

    return 0;
}

