#include <iostream>
using namespace std;
int main() {
    int n;cin>>n;
    string s;cin>> s;
    int M = 0;
    for (int i = 1; i < n; i++)
        {
           if (s[i]==s[i - 1])
              {
            M++;
              }
        }
    cout<<M<<endl;
    return 0;
}

