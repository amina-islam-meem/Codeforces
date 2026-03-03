#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

using vi = vector<int>;
using vll = vector<long long>;


string number(int n)
 {
    string first[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    string second[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string ten[10] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};

     if (n< 10)
        return first[n];

    else if(n < 20)
        return second[n-10];

    else if(n < 100)
        {
        int m = n/ 10;
        int p = n% 10;

        if (p == 0)
            return ten[m];

        else
            return ten[m] + "-" + first[p];

    }
 }




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int n; cin >> n;

    cout << number(n) << nl;



    return 0;
}
