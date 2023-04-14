#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> pos, neg;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp < 0)
        {
            neg.push_back(temp);
        }
        else
        {
            pos.push_back(temp);
        }
    }

    vector<int> ma, mi;
    int sum = 0;
    for (int i = 0; i < pos.size(); i++)
    {
        s.insert(pos[i]);
        ma.push_back(s.size());
    }
    for (int i = 0; i < neg.size(); i++)
    {
        s.erase(-1 * neg[i]);
        ma.push_back(s.size());
    }

    s.clear();
    map<int, bool> m;
    for (int i = 0; i < neg.size(); i++)
    {
        mi.push_back(1);
        mi.push_back(0);
        m[-1 * neg[i]] = true;
    }

    for (int i = 0; i < pos.size(); i++)
    {
        if (m[pos[i]])
        {
            continue;
        }
        else
        {
            s.insert(pos[i]);
            mi.push_back(s.size());
        }
    }

    for (auto it : ma)
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto it : mi)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}