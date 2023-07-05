#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xa, ya, xb, yb, xc, yc;
        for (int i = 0; i < 3; i++)
        {
            cin >> xa >> ya;
            cin >> xb >> yb;
            cin >> xc >> yc;
        }
        int ans = 1;
        // if (xb >= xa && xc >= xa)
        // {
        ans += min(abs(xa - xb), abs(xa - xc));
        // }
        // if()
        //  if (xb <= xa && xc <= xa)
        // {
        ans += min(abs(ya - yb), abs(ya - yc));
        // }

        cout << ans << endl;
    }
}