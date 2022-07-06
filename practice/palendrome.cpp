#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int palindrome(char s[], int l, int e)
{
    int var_count = 1;
    for (int i = l + 1; i < e + 1; i++)
    {
        int x = 0;
        // cout << " s[i] = " << s[i];
        // cout << endl;
        for (int j = i - 1; j >= l; j = j - 1)
        {
            // cout << " s[j] = " << s[j];
            // cout << endl;
            if (s[i] == s[j])
            {
                x = 1;
            }
        }
        if (x == 0)
        {
            var_count++;
        }
        // cout << "new Line" << endl;
    }
    return var_count;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, q;
        cin >> n >> q;
        char s[n + 1];
        for (int j = 1; j < n + 1; j++)
        {
            cin >> s[j];
        }
        // for (int j = 1; j < n + 1; j++)
        // {
        //     cout << s[j];
        // }
        // cout << endl;
        int r = 0;
        for (int j = 0; j < q; j++)
        {
            int l, e, c;
            cin >> l >> e;
            int d = e - l;
            c = palindrome(s, l, e);
            // cout << "Var Count = " << c << "  "
            //      << "Dif Count = " << d << endl;
            if (d == 0)
            {
                r = r + 1;
            }
            else if (d == 1 && c == 1)
            {
                r = r + 1;
            }
            else
            {
                int div = d/2;
                if (d % 2 == 0 && div >= c)
                {
                    r = r + 1;
                }
                if (d % 2 != 0 && div + 1 >= c)
                {
                    r = r + 1;
                }
            }
        }
        cout << "Case #" << i + 1 << ": " << r << endl;
    }
    return 0;
}