/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,r;
    cin>>n>>k>>a;
    r=((n*k)/a);
    if(a==0)
        cout<<"double"<<endl;
    else if(r<=2147483647)
        cout<<"int"<<endl;
    else
        cout<<"long long"<<endl;
    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    unsigned int n, k, a;
    cin >> n >> k >> a;
    unsigned long long result = 1ULL * n * k * a;
    if (result <= 2147483647) {
        cout << "int" << endl;
    }
    else if (result <= 9223372036854775807ULL) {
        cout << "long long" << endl;
    }
    else {
        cout << "double" << endl;
    }

    return 0;
}


