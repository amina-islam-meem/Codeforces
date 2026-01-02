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
        string s;cin >> s;
        int countA = 0;
        int countB = 0;
        int countC = 0;
        for(int i = 0 ; i < s.size(); i++)
        {
            if(s[i] == 'a')
                countA++;
            else if(s[i] == 'b')
                countB++;
            else
                countC++;
        }
        int count = max({countA , countB , countC});
        if(count ==2 && (s[0]!=s[N-1]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl
            if (s.find(s[1], 2) != string::npos || s[0] == s[1]) {
                cout << "Yes\n";
                }
        else {
                cout << "No\n";
               }





    }
    return 0;
}*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >> T;
    while(T--)
    {
    	int N; cin >> N;
        string s; cin >> s;
        vector <int> freq(26,0);

        for(int i = 0; i < N; i++)
        {
        	freq[s[i]-'a']++;
        }

        bool flag = false;
        for(int i = 0; i < 26; i++)
        {
        	if(freq[i] > 2){
            	flag = true;
                break;
            }
            if(freq[i] == 2){
            	char c = (char) ('a'+i);
                if(s[0] != c || s[N-1] != c){
            	flag = true;
                break;
            	}
            }
        }
        if(flag == true)
        	cout << "YES" << endl;
        else
        	cout << "NO" << endl;
    }

    return 0;
}


