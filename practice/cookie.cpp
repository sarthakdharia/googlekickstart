#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n, m, cs;
        cin >> n >> m >> cs;
        int ct[cs];
        int arr[n + 1] = {}, temp = 0;
        for (int i = 0; i < m; i++)
        {
            int ino;
            cin >> temp >> ino;
            arr[ino] = 1;
        }
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == 0)
            {
                ct[count] = i;
                count++;
            }
        }
        int r;
        if (count == cs)
        {
            r = ct[count] + 1;
            cout << "Case #" << k + 1 << ": " << r << endl;
        }
        else if (count < cs)
        {
            cout << "Case #" << k + 1 << ": " << 1 << endl;
        }
    }
    return 0;
}