#include <iostream>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int kcount = 0, prev = 0, next = 0;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        if (k >= l && k <= r)
        {
            if (k == l && k == r)
            {
                kcount++;
            }
            else if (k == l && k < r)
            {
                kcount++;
                next++;
            }
            else if (k == r)
            {
                kcount++;
                prev++;
            }
        }
    }
    if (kcount > prev && kcount > next)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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