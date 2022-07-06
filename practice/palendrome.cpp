#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int palindrome(char s[], int l, int e)
{
    int var_count = 0;
    for (int i = l; i < e + 1; i++)
    {
        int x = 0;
        for (int j = i; j < l - 1; j--)
        {
            if (s[i] == s[j])
            {
                x = 1;
            }
        }
        if (x == 0)
        {
            var_count++;
        }
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
        int r = 0;
        for (int j = 0; j < q; j++)
        {
            int count = 0, l, e, c;
            cin >> l >> e;
            int d = l - e;
            c = palindrome(s, l, e);
            if (d == 0)
            {
                r = r + count;
            }
            else if (d == 2 || c == 1)
            {
                r = r + count;
            }
            else
            {
                if (d % 2 == 0 || d - 2 >= c)
                {
                    count = 1;
                }
                else if (d % 2 != 0 || d - 1 >= c)
                {
                    count = 1;
                }
                else
                {
                    count = 0;
                }
                r = r + count;
            }
        }
        cout << "Case #" << i + 1 << ": " << r << endl;
    }
    return 0;
}