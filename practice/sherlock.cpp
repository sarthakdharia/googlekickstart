#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin >> t;
    for (long i = 0; i < t; i++)
    {
        long l, r;
        cin >> l >> r;
        long s = 0;
        if (r < l)
        {
            s = r*(r + 1)/2;
        }
        else
        {
            s = l*(l + 1)/2;
        }
        cout << "Case #" << i + 1 << ": " << s << endl;
    }
    return 0;
}
