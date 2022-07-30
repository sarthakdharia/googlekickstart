#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int temp = k + 1, n, m, dif, r = 0, post[100] = {};
        cin >> n;
        int inp[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> inp[i];
        }
        cin >> m;
        int key[m + 1];
        for (int i = 0; i < m; i++)
        {
            cin >> key[i];
            if (post[key[i]] == 0)
            {
                post[key[i]] = i;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            dif = post[inp[i]] - post[inp[i + 1]];
            if (dif < 0)
            {
                r = r - dif;
            }
            else
            {
                r = r + dif;
            }
        }
        cout << "Case #" << temp << ": " << r << endl;
    }
    return 0;
}