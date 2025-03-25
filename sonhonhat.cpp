#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

string a;
int s, d, ok;

void Try(int sn)
{
    if (ok) return;
    if (a.size() == d)
    {
        if (sn == s)
        {
            ok = 1;
            cout << a << endl;
        }
        return;
    }
    
    if (s - sn > (d - a.size()) * 9) return;
    for (int i = 0; i <= 9; i++)
    {
        a += to_string(i);
        Try(sn + i);
        if (ok) return; 
        a.pop_back();
    }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    { 
        ok = 0;
        cin >> s >> d;
        
        for (int i = 1; i <= 9; i++)
        {
            if (!ok)
            {
                a = to_string(i);
                Try(i);
                if (ok) break;
                a.pop_back();
            }
        }
        
        if (!ok) cout << -1 << endl;
    }
}
