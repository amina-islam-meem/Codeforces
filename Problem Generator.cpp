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
        int N,m; cin >> N >> m;
        string s; cin >> s;
        sort(s.begin(),s.end());
        int cA = 0;
        int cB = 0;
        int cC = 0;
        int cD = 0;
        int cE = 0;
        int cF = 0;
        int cG = 0;
        int count =0;
        for(int i = 0 ; i < N ; i++)
        {
            if(s[i]== 'A')
                cA++;
            if(s[i]== 'B')
                cB++;
            if(s[i]== 'C')
                cC++;
            if(s[i]== 'D')
                cD++;
            if(s[i]== 'E')
                cE++;
            if(s[i]== 'F')
                cF++;
            if(s[i]== 'G')
                cG++;
        }
        if(cA < m )
            count += (m-cA);
        if(cB < m )
            count += (m-cB);
        if(cC < m )
            count += (m-cC);
        if(cD < m )
            count += (m-cD);
        if(cE < m )
            count += (m-cE);
        if(cF < m )
            count += (m-cF);
        if(cG < m )
            count += (m-cG);

            cout << count << endl;

    }
    return 0;
}*/

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
        int N,M; cin >> N >> M;
        string s; cin >> s;
        int
         fre[7] ={0};
        for(char c : s )
        {
            fre[c-'A']++;
        }
        int count = 0 ;
        for(int i = 0 ; i < 7 ; i++)
        {
            if(fre[i]<M)
            {
                count+= M - fre[i];
            }
        }
        cout << count << endl;


    }
    return 0;
}
